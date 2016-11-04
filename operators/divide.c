/*
** multiply.c for bistro-matic in /media/gmardon/1aa9b3b8-3e24-4ea9-9b0d-d57254b2d1b9/guillaume.mardon/delivery/CPool_bistro-matic/operators/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu@epitech.eu>
**
** Started on  Sun Oct 30 14:32:57 2016 Guillaume MARDON
** Last update Fri Nov  4 16:40:11 2016 Guillaume MARDON
*/
#include <stdlib.h>
//#include "divide.h"

char	*divide(char *val1, char *val2)
{
  size_t diff;
  char *temp;
  char *nbr;
  char *result;
  int count;
  int result_index;

  if (my_strlen(val1) < my_strlen(val2) || is_greater(val2, val1) == 1)
    return ("0");
  diff = my_strlen(val1) - my_strlen(val2);

  result = malloc(sizeof(char *) * diff);
  result_index = 0;
  nbr = malloc(sizeof(char *) * diff);

  while (diff != 0)
    {
      count = 0;
      temp = malloc(sizeof(char *) * diff);

      nbr = put_chars_with_offset(nbr, val2, my_strlen(val2) - diff);
    //  put_chars_with_offset(temp, val2, my_strlen(val2) - diff);
printf("nbr: '%s'\n", nbr);
      return (0);
      while (is_greater(temp, val1) == -1)
				{
						count++;
	  printf("nbr: %s\n", nbr);
	  				temp = add(temp, nbr);
						printf("temp: %s\n", temp);
				}
        diff--;
      result[result_index++] = count + 48;
      //printf("r: %d", e);
    }
		return (result);
}
