/*
** operators.c for bistro-matic in /home/moana.dumora/delivery/CPool_bistro-matic/
**
** Made by Moana DUMORA
** Login   <moana.dumora@epitech.eu>
**
** Started on  Mon Oct 24 10:02:37 2016 Moana Dumora
** Last update Wed Oct 26 22:56:03 2016 Moana Dumora
*/

#include <stdlib.h>
#include "set_index.c"

char	*couperdecaler(char *result)
{
  int	i;
  char	*str;

  str = result;
  i = 0;
  while (str[0] == '0')
    {
      while (result[i] != '\0')
	{
	  str[i] = result[i + 1];
	  i++;
	}
    }
  return (str);
}

void	add_inf(char *val1, char *val2)
{
  int	index;
  int	retained;
  char	*result;
  int	value;

  if (my_strlen(val1) > my_strlen(val2))
    val2 = set_index(val1, val2);
  else if (my_strlen(val2) > my_strlen(val1))
    val1 = set_index(val1, val2);
  index = my_strlen(val1);
  result = malloc(8 * (index + 3));
  result[0] = ((val1[0] - 48 + val2[0] - 48) >= 10 ? '1' : '0');
  while (index + 1 > 1)
    {
      value = (val2[index - 1] - 48) + (val1[index - 1] - 48);
      if (value >= 10)
	{
	  value = value - 10;
	  val2[index - 2] = val2[index - 2] + 1;
	}
      result[index] = value + 48;
      index--;
    }
  result = (couperdecaler(result));
  my_putstr(result);
}
