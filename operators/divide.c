/*
** multiply.c for bistro-matic in /media/gmardon/1aa9b3b8-3e24-4ea9-9b0d-d57254b2d1b9/guillaume.mardon/delivery/CPool_bistro-matic/operators/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu@epitech.eu>
**
** Started on  Sun Oct 30 14:32:57 2016 Guillaume MARDON
** Last update Sat Nov  5 19:12:28 2016 Guillaume MARDON
*/

#include "winline.h"
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
    return (divide(val1 + 1, val2 + 1));
}

char	*divide(char *val1, char *val2)
{
  t_guigui	np;

  if (my_strlen(val1) < my_strlen(val2) || is_greater(val2, val1) == 1)
    return ("0");
  if (is_neg(val1) || is_neg(val2))
    return (divide_handle_negative(val1, val2));
  np.diff = my_strlen(val1) - my_strlen(val2);
  np.result = malloc(sizeof(char *) * my_strlen(val1));
  np.target = my_strdup(val1);
  np.result_index = 0;
  while ((np.diff + 1) != 0)
    {
      np.count = 0;
      np.value = malloc(sizeof(char *) * (np.diff + 1));
      str_set_zero(np.value, (np.diff + 1));
      put_chars_with_offset(np.value, val2, np.diff);
      while (is_greater("0", np.target) != 1)
	{
	  np.count++;
	  np.target = minus(np.target, np.value);
	}
      np.target = add(np.target, np.value);
      np.result[np.result_index++] = (np.count - 1) + 48;
      np.diff--;
    }
  return (remove_zeros(np.result));
}
