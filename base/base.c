/*
** base.c for bistro in /home/moana/Piscine/CPool_bistro-matic/base/
**
** Made by Moana Dumora
** Login   <moana.dumora@epitech.eu@epitech.eu>
**
** Started on  Mon Oct 31 15:29:25 2016 Moana Dumora
** Last update Sat Nov  5 11:42:52 2016 Victor LE DANTEC
*/

#include <stdlib.h>

size_t	my_strlen(char *);
int	my_power_rec(int, int);
char	*my_strcat(char *, char *);
int	clean_zero(char *, char *);
char	*size_to_str(size_t);
char	*etvalbase(char *);

char	*convert_to_ten(char *nbr, char *base)
{
  char  	*total;
  size_t	index;
  size_t	kindex;
  size_t	pow;
  char		*val_base;
  char		*final;

  pow = size_to_str(my_strlen(nbr) - 1);
  val_base = malloc(sizeof(char *) * (my_strlen(base) + 1));
  index = kindex = 0;
  total = malloc(2000);
  val_base = etvalbase(base);
  while (nbr[index] != '\0')
    {
      if (nbr[index] == base[kindex])
	{
	  total = add(total ,multiply(power(my_strlen(base), pow--), (val_base[kindex] - 48)));
	  kindex = 0;
	  index++;
	}
      else
	kindex++;
    }
  val_base[0] = base[0];
  val_base[1] = '\0';
  return ((clean_zero(nbr, base) == 1) ? total : val_base);
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

char    *my_opptr2(char *str, char **endptr)
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
      if (str[2][0] == '-' || str[2][0] == '+' || str[2][0] == '*'
	  || str[2][0] == '/' || str[2][0] == '%' || str[2][0] == '('
		|| str[2][0] == ')')
	final = my_strcat(final, my_opptr2(str[2], str));
      else
	final = my_strcat(final, my_baseptr(str[2], str, base));
    }
  return (final);
}
