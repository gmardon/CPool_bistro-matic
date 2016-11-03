/*
** base.c for bistro in /home/moana/Piscine/CPool_bistro-matic/base/
**
** Made by Moana Dumora
** Login   <moana.dumora@epitech.eu@epitech.eu>
**
** Started on  Mon Oct 31 15:29:25 2016 Moana Dumora
** Last update Mon Oct 31 17:29:28 2016 Moana Dumora
*/

#include <stdio.h>
#include <stdlib.h>

size_t	my_strlen(char *);

int	my_power_rec(int, int);

char	*etvalbase(char *base)
{
  int	i;
  char	*val_base;

  i = 0;
  val_base = malloc(sizeof(char *) * (my_strlen(base) + 1));
  while (i < my_strlen(base))
    {
      val_base[i] = i + '0';
      i++;
    }
  return (val_base);
}

char	*size_to_str(size_t total)
{
  size_t	tmp;
  size_t	i;
  char		*str;

  i = 0;
  tmp = total;
  while (tmp > 0)
    {
      i++;
      tmp = tmp / 10;
    }
  str = malloc(sizeof(char *) * (i + 1));
  while (i > 0)
    {
      tmp = 0;
      tmp = total % 10;
      total = total / 10;
      str[i - 1] = tmp + '0';
      i--;
    }
  return (str);
}

char	*convert_to_ten(char *nbr, char *base)
{
  size_t	total;
  size_t	index;
  size_t	kindex;
  size_t	pow;
  char		*val_base;
  char		*final;

  pow = my_strlen(nbr) - 1;
  val_base = malloc(sizeof(char *) * (my_strlen(base) + 1));
  total = index = kindex = 0;
  val_base = etvalbase(base);
  while (nbr[index] != '\0')
    {
      if (nbr[index] == base[kindex])
	{
	  total += my_power_rec(my_strlen(base), pow) * (val_base[kindex] - 48);
	  index++;
	  kindex = 0;
	  pow--;
	}
      else
	kindex++;
    }
  final = size_to_str(total);
  return (final);
}

char    *my_baseptr(char *str, char **endptr, char *base)
{
  int   i;
  char  *nbr;
  int   k;
  int   j;

  i = k = j = 0;
  nbr = malloc(sizeof(char *) * my_strlen(str));
  while (*str != '\0')
    {
      if (*str != '*' && *str != '+' && *str != '-' && *str != '/' &&
	  *str != '%' && *str != '(' && *str != ')')
	{
	  nbr[k] = *str;
	  k++;
	  if (str[1] == '*' || str[1] == '+' || str[1] == '-' || str[1] == '/' ||
	      str[1] == '%' || str[1] == '(' || str[1] == ')' || str[1] == '\0')
	    {
	      str++;
	      endptr[2] = str;
	      return (convert_to_ten(nbr, base));
	    }
	}
      str++;
    }
}

char    *my_opptr(char *str, char **endptr)
{
  int   i;
  char  *op;
  int   k;
  int   j;

  i = k = j = 0;
  op = malloc(sizeof(char *) * my_strlen(str));
  while (*str != '\0')
    {
      if (*str == '-' || *str == '+' || *str == '*' || *str == '/'
	  || *str == '%'  || *str == '(' || *str == ')')
	{
	  op[k] = *str;
	  k++;
	  if (str[1] <= '9' || str[1] >= '0')
	    {
	      str++;
	      endptr[2] = str;
	      return (op);
	    }
	}
      str++;
    }
}

char	*whole_convert(char *base, char **str)
{
  char	*final;
  
  final = malloc(sizeof(char *) * (my_strlen(str[2]) + 1));
  while (str[2][0] != '\0')
    {
      if (str[2][0] == '-' || str[2][0] == '+' || str[2][0] == '*' || str[2][0] == '/'
	  || str[2][0] == '%' || str[2][0] == '(' || str[2][0] == ')')
	final = my_strcat(final, my_opptr(str[2], str));
      else
	final = my_strcat(final, my_baseptr(str[2], str, base));
    }
  return (final);
}
