/*
** minus.c for bistro-matic in /media/gmardon/1aa9b3b8-3e24-4ea9-9b0d-d57254b2d1b9/guillaume.mardon/delivery/CPool_bistro-matic/operators/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu@epitech.eu>
**
** Started on  Sun Oct 30 14:28:34 2016 Guillaume MARDON
** Last update Sun Nov  6 21:43:34 2016 Moana Dumora
*/

#include "minus.h"

char	*minus_handle_negative(char *val1, char *val2)
{
  if (!is_neg(val1) && is_neg(val2))
    return (add(val1, val2 + 1));
  else if (is_neg(val1) && !is_neg(val2))
    return (set_negative(minus_handle_negative(val2, val1)));
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
  t_for_sake_of_norm	nrm;

  if (is_neg(val1) || is_neg(val2) || (is_greater(val2, val1) == 1))
    return (minus_handle_negative(val1, val2));
  if (my_strlen(val1) < my_strlen(val2))
    val1 = equalise_numbers(val1, val2);
  else if (my_strlen(val1) > my_strlen(val2))
    val2 = equalise_numbers(val1, val2);
  nrm.length = nrm.index = my_strlen(val1);
  nrm.result = malloc(8 * (nrm.length + 1));
  nrm.retained = 0;
  while (nrm.index-- > -1)
    {
      nrm.value = (val1[nrm.index] - 48) - ((val2[nrm.index] - 48) + nrm.retained);
      if (val1[nrm.index] <= val2[nrm.index])
	{
	  nrm.value = ((val1[nrm.index] - 48) + 10) -
	      ((val2[nrm.index] - 48) + nrm.retained);
	  nrm.retained = 1;
	}
      else
	nrm.retained = 0;
      if (nrm.value >= 10)
	{
	  nrm.retained--;
	  nrm.value = nrm.value % 10;
	}
      nrm.result[nrm.index] = nrm.value + 48;
    }
  return (remove_zeros(nrm.result));
}
