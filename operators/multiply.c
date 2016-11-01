/*
** multiply.c for bistro-matic in /media/gmardon/1aa9b3b8-3e24-4ea9-9b0d-d57254b2d1b9/guillaume.mardon/delivery/CPool_bistro-matic/operators/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu@epitech.eu>
**
** Started on  Sun Oct 30 14:32:57 2016 Guillaume MARDON
** Last update Tue Nov  1 21:20:46 2016 Guillaume MARDON
*/
#include "multiply.h"

char	*multiply(char *val1, char *val2)
{
  int		indexVal1;
  int 	indexVal2;
  char	*result;
  char	*toAdd;
  int		val2len;
  int		val1len;

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
	  toAdd = malloc(8 * (my_strlen(val1) + my_strlen(val2)));
	  str_set_zero(toAdd, (my_strlen(val1) + my_strlen(val2)));
	  result = add(result, put_with_offset(toAdd,
					       (val1[indexVal1] - 48) * (val2[indexVal2] - 48),
					       (val1len - indexVal1 - 1) + (val2len - indexVal2 - 1)));
				}
      indexVal1++;
    }
  return (remove_zeros(result));
}
