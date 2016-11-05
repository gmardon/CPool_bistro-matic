/*
** multiply.c for bistro-matic in /media/gmardon/1aa9b3b8-3e24-4ea9-9b0d-d57254b2d1b9/guillaume.mardon/delivery/CPool_bistro-matic/operators/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu@epitech.eu>
**
** Started on  Sun Oct 30 14:32:57 2016 Guillaume MARDON
** Last update Sat Nov  5 17:29:08 2016 Guillaume MARDON
*/

#include "divide.h"

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

  diff = my_strlen(val1) - my_strlen(val2);
  result = malloc(sizeof(char *) * my_strlen(val1));
  target = my_strdup(val1);
  result_index = 0;
  while ((diff + 1) != 0)
    {
      printf("begin with target: %s\n", target);
      printf("diff: %d", diff);
      count = 0;
      value = malloc(sizeof(char *) * (diff + 1));
      str_set_zero(value, (diff + 1));
      put_chars_with_offset(value, val2, diff);
			printf("value: %s\n", value);

      while (is_greater("0", target) != 1)
				{
						count++;
	  				target = minus(target, value);
	  				printf("target: %s\n", target);
	  		}
      target = add(target, value);

				printf("index: %d, count: %d\n", result_index, count - 1);


      result[result_index++] = (count - 1) + 48;
      diff--;
      /*
      count = 0;
      temp = malloc(sizeof(char *) * diff);

      nbr = put_chars_with_offset(nbr, val2, my_strlen(val2) - diff);
      printf("v: %s, m: %d, nbr: %s\n", val2, my_strlen(val2) - diff, nbr);
    //  put_chars_with_offset(temp, val2, my_strlen(val2) - diff);
			printf("nbr: '%s'\n", nbr);
    //  return "0";
      while (is_greater(temp, val1) == -1)
				{
						count++;
	  				printf("nbr: %s\n", nbr);
	  				temp = add(temp, nbr);
						printf("temp: %s\n", temp);
				}*/

      //result = add(result, size_to_str(count));
    }
  	printf("result: '%s'\n", result);
		return (result);
}
