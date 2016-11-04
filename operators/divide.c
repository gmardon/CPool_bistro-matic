/*
** multiply.c for bistro-matic in /media/gmardon/1aa9b3b8-3e24-4ea9-9b0d-d57254b2d1b9/guillaume.mardon/delivery/CPool_bistro-matic/operators/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu@epitech.eu>
**
** Started on  Sun Oct 30 14:32:57 2016 Guillaume MARDON
** Last update Fri Nov  4 10:23:33 2016 Guillaume MARDON
*/
#include <stdlib.h>
//#include "divide.h"

char	*divide(char *val1, char *val2)
{
  size_t diff;
  char *temp;
  char *result;
  int e;

  if (my_strlen(val1) < my_strlen(val2))
    return ("0");
  diff = my_strlen(val1) - my_strlen(val2);
  result = malloc(sizeof(char *) * diff);
  while (diff != 0)
    {
      temp = malloc(sizeof(char *) * diff);
      str_set_zero(temp, diff);
      while(is_greater(temp, val1) == -1)
				{
						e++;
				}
      diff--;
      e = 0;
    }


}
