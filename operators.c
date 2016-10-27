/*
** operators.c for bistro-matic in /home/moana.dumora/delivery/CPool_bistro-matic/
**
** Made by Moana DUMORA
** Login   <moana.dumora@epitech.eu>
**
** Started on  Mon Oct 24 10:02:37 2016 Moana Dumora
** Last update Thu Oct 27 16:44:29 2016 John Doe
*/

#include <stdlib.h>
#include "set_index.c"

char	*couperdecaler(char *result)
{
  int	i;
  char	*str;
  int	size;

  str = result;
  i = 0;
  while (str[0] == '0' && str[1] != '0')
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
  my_putchar('\n');
}

char	*minus_inf(char *val1, char *val2)
{
  char	*result;
  int	index;
  int	length;
  int	value;
  int	retained;

  if (my_strlen(val1) < my_strlen(val2))
    val1 = equalise_numbers(val1, val2);
  else if (my_strlen(val1) > my_strlen(val2))
    val2 = equalise_numbers(val1, val2);
  length = my_strlen(val1);
  result = malloc(8 * (length + 1));
  index = length - 1;
  retained = 0;
  while (index > -1)
    {
      value = (val1[index] - 48) - ((val2[index] - 48) + retained);
      if (value < 0)
	  value = ((val1[index] - 48) + 10) - ((val2[index] - 48) + retained++);
      value = (value >= 10 ? value % 10 : value);
      result[index] = value + 48;
      index--;
    }
  return result;
}

char	*multiply_inf(char *val1, char *val2)
{
  int	indexVal1;
  int 	indexVal2;
  char	*result;
  int	value;
  int	val2len;
  int	val1len;

  result = malloc(8 * (my_strlen(val1) + my_strlen(val2)));
  str_set_zero(result, (my_strlen(val1) + my_strlen(val2)));
  indexVal1 = 0;
  val1len = my_strlen(val1);
  while (indexVal1 < my_strlen(val1))
    {
      indexVal2 = val2len = my_strlen(val2);
      while (indexVal2 > 0)
	{
	  indexVal2--;
	  value = (val1[indexVal1] - 48)
	      * my_power_rec(10, (val1len - indexVal1 - 1))
	      * ((val2[indexVal2] - 48)
	      * my_power_rec(10, (val2len - indexVal2 - 1)));
	  result = add_inf(result, int_to_string(value));
	}
      indexVal1++;
    }
  return (result);
}
