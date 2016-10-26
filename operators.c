/*
** operators.c for bistro-matic in /home/guillaume.mardon/delivery/CPool_bistro-matic/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu>
**
** Started on  Mon Oct 24 10:02:37 2016 Guillaume MARDON
** Last update Wed Oct 26 07:00:11 2016 Guillaume MARDON
*/
#include <stdio.h>
#include <stdlib.h>
#include "int_to_string.c"

char	*equalise_numbers(char *val1, char *val2)
{
  int	val1len;
  int	val2len;
  int	biggerlen;
  char	*newarray;
  int	index;

  val1len = my_strlen(val1);
  val2len = my_strlen(val2);
  index = 0;
  if (val1len > val2len)
    {
      newarray = malloc(val1len * sizeof(char*));
      while (index++ < val1len)
	  newarray[index - 1] = ((index - 1) < (val1len - val2len)
		             ? '0' : val2[(index - 1) - (val1len - val2len)]);
    }
  else
    {
      newarray = malloc(val2len * sizeof(char*));
      while (index++ < val2len)
	  newarray[index] = ((index - 1) < (val2len - val1len)
			     ? '0' : val1[(index - 1) - (val2len - val1len)]);
    }
  return newarray;
}

char	*str_set_zero(char *str, int size)
{
  int	index;

  index = 0;
  while (index < size)
      str[index++] = '0';
}

char	*add_inf(char *val1, char *val2)
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
      value = (val1[index] - 48) + (val2[index] - 48) + retained;
      retained = (value >= 10 ? value / 10 : 0);
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
