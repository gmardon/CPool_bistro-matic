/*
** base.c for bistro in /home/moana/Piscine/CPool_bistro-matic/base/
**
** Made by Moana Dumora
** Login   <moana.dumora@epitech.eu@epitech.eu>
**
** Started on  Mon Oct 31 15:29:25 2016 Moana Dumora
** Last update Sun Nov  6 20:13:49 2016 Victor LE DANTEC
*/

#include "struct.h"
#include "base.h"

char	*char_to_str(char c)
{
  char	*str;

  str = malloc(sizeof(char *) * 2);
  str[0] = c;
  str[1] = '\0';
  return (str);
}

char	*convert_to_ten(char *nbr, char *base)
{
  t_winlines	pb;

  pb.pow = malloc(sizeof(char *) * (my_strlen(nbr) + 1));
  pb.val_base = malloc(sizeof(char *) * 2);
  pb.val_base = etvalbase(base);
  pb.pow = size_to_str(my_strlen(nbr) - 1);
  pb.index = pb.kindex = 0;
  pb.total = malloc(sizeof(char *) * (my_strlen(base) / 10));
  while (nbr[pb.index] != '\0')
    {
      if (nbr[pb.index] == base[pb.kindex])
	{
	  pb.total = add(pb.total ,multiply(power(size_to_str(my_strlen(base)), pb.pow),
				      size_to_str(pb.val_base[pb.kindex] - 48)));
	  pb.pow = minus(pb.pow, my_strdup("1"));
	  pb.kindex = 0;
	  pb.index++;
	}
      else
	pb.kindex++;
    }
  pb.val_base[0] = base[0];
  pb.val_base[1] = '\0';
  return ((clean_zero(nbr, base) == 1) ? pb.total : pb.val_base);
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
