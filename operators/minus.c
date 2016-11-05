/*
** minus.c for bistro-matic in /media/gmardon/1aa9b3b8-3e24-4ea9-9b0d-d57254b2d1b9/guillaume.mardon/delivery/CPool_bistro-matic/operators/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu@epitech.eu>
**
** Started on  Sun Oct 30 14:28:34 2016 Guillaume MARDON
** Last update Sat Nov  5 14:44:31 2016 Guillaume MARDON
*/

#include "minus.h"

char	*minus_handle_negative(char *val1, char *val2)
{
  if (!is_neg(val1) && is_neg(val2))
      return (add(val1, val2 + 1));
  else if (is_neg(val1) && !is_neg(val2))
      return (minus_handle_negative(val2, val1));
  else if (is_neg(val1) && is_neg(val2))
    {
      if (is_greater(val1 + 1, val2 + 1) == 1)
	  			return (set_negative(minus(val1 + 1, val2 + 1)));
      else if (is_greater(val1 + 1, val2 + 1) == -1)
					return (minus(val2 + 1, val1 + 1));
      else
					return ("0");
    }
    else if (!is_neg(val1) && !is_neg(val2) && is_greater(val2, val1) == 1)
      return (set_negative(minus(val2, val1)));
}

char	*minus(char *val1, char *val2)
{
  char	*result;
  int	index;
  int	length;
  int	value;
  int	retained;

  if (is_neg(val1) || is_neg(val2) || (is_greater(val2, val1) == 1))
    return (minus_handle_negative(val1, val2));
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
      if (val1[index] <= val2[index])
				{
	  			value = ((val1[index] - 48) + 10) - ((val2[index] - 48) + retained);
	  			retained = 1;
	  		}
      else
				retained = 0;
      if (value >= 10)
				{
	  			retained--;
	  			value = value % 10;
				}
      result[index--] = value + 48;
    }
  return (remove_zeros(result));
}
