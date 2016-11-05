/*
** multiply.c for bistro-matic in /media/gmardon/1aa9b3b8-3e24-4ea9-9b0d-d57254b2d1b9/guillaume.mardon/delivery/CPool_bistro-matic/operators/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu@epitech.eu>
**
** Started on  Sun Oct 30 14:32:57 2016 Guillaume MARDON
** Last update Sat Nov  5 18:13:11 2016 Guillaume MARDON
*/

#include "divide.h"

char	*divide_handle_negative(char *val1, char *val2)
{
  val1 = clean_negation(val1);
  val2 = clean_negation(val2);
  if ((is_neg(val1) || is_neg(val2)) && !(is_neg(val1) && is_neg(val2)))
    {
      if (is_neg(val1) && !is_neg(val2))
	  				return (set_negative(divide(val1 + 1, val2)));
      else if (!is_neg(val1) && is_neg(val2))
	  				return (set_negative(divide(val1, val2 + 1)));
    }
	else if (is_neg(val1) && is_neg(val2))
	 {
	 		return (divide(val1 + 1, val2 + 1));
	 }
}

char	*divide(char *val1, char *val2)
{
  size_t diff;
  char *target;
  char *value;
  char *number;
  char *result;
  int count;
  int result_index;

  if (my_strlen(val1) < my_strlen(val2) || is_greater(val2, val1) == 1)
    return ("0");
  if (is_neg(val1) || is_neg(val2))
    return (divide_handle_negative(val1, val2));
  diff = my_strlen(val1) - my_strlen(val2);
  result = malloc(sizeof(char *) * my_strlen(val1));
  target = my_strdup(val1);
  result_index = 0;
  while ((diff + 1) != 0)
    {
      count = 0;
      value = malloc(sizeof(char *) * (diff + 1));
      str_set_zero(value, (diff + 1));
      put_chars_with_offset(value, val2, diff);
      while (is_greater("0", target) != 1)
				{
						count++;
	  				target = minus(target, value);
	  		}
      target = add(target, value);
      result[result_index++] = (count - 1) + 48;
      diff--;
    }
		return (result);
}
