/*
** operators.c for bistro-matic in /home/moana.dumora/delivery/CPool_bistro-matic/
**
** Made by Moana DUMORA
** Login   <moana.dumora@epitech.eu>
**
** Started on  Mon Oct 24 10:02:37 2016 Moana Dumora
** Last update Wed Oct 26 21:31:11 2016 Moana Dumora
*/

#include <stdlib.h>
#include "set_index.c"

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
  if ((val1[0] + val2[0]) >= 10)
    result[0] = '1';
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
  my_putstr(result);
}
