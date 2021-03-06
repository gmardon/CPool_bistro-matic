/*
** add.c for bistro-matic in /media/gmardon/1aa9b3b8-3e24-4ea9-9b0d-d57254b2d1b9/guillaume.mardon/delivery/CPool_bistro-matic/operators/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu@epitech.eu>
**
** Started on  Sun Oct 30 14:27:30 2016 Guillaume MARDON
** Last update Sat Nov  5 19:08:36 2016 Guillaume MARDON
*/
#include "../utils/utils.h"
#include "add.h"
#include "lines.h"

char	*add_handle_negative(char *val1, char *val2)
{
  if (is_neg(val1) && !is_neg(val2))
    {
      if (is_greater(val1 + 1, val2) == 1)
	return (set_negative(minus(val1 + 1, val2)));
      else if (is_greater(val1 + 1, val2) == -1)
	return (minus(val2, val1 + 1));
      else
	return ("0");
    }
  else if (!is_neg(val1) && is_neg(val2))
    return (add_handle_negative(val2, val1));
  else if (is_neg(val1) && is_neg(val2))
    return (set_negative(add(val1 + 1, val2 + 1)));
}

char	*add(char *val1, char *val2)
{
  t_lines	pl;

  if (is_neg(val1) || is_neg(val2))
    return (add_handle_negative(val1, val2));
  if (my_strlen(val1) < my_strlen(val2))
    val1 = equalise_numbers(val1, val2);
  else if (my_strlen(val1) > my_strlen(val2))
    val2 = equalise_numbers(val1, val2);
  pl.length = my_strlen(val1);
  pl.result = malloc(8 * (pl.length + 1));
  str_set_zero(pl.result, pl.length + 1);
  pl.index = pl.length - 1;
  pl.retained = 0;
  while (pl.index >= 0)
    {
      pl.value = (val1[pl.index] - 48) + (val2[pl.index] - 48) + pl.retained;
      pl.retained = (pl.value >= 10 ? pl.value / 10 : 0);
      pl.value = (pl.value >= 10 ? pl.value % 10 : pl.value);
      pl.result[pl.index + 1] = pl.value + 48;
      pl.index--;
      if (pl.index == -1 && pl.retained != 0)
	pl.result[0] = pl.retained + 48;
    }
  return (remove_zeros(pl.result));
}
