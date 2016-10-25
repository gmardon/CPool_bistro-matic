/*
** operators.c for bistro-matic in /home/guillaume.mardon/delivery/CPool_bistro-matic/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu>
**
** Started on  Mon Oct 24 10:02:37 2016 Guillaume MARDON
** Last update Tue Oct 25 16:19:11 2016 Guillaume MARDON
*/
#include <stdio.h>
#include <stdlib.h>
#include "int_to_string.c"
/*
char	*add_inf(char *val1, char *val2)
{
  int	indexVal1;
  int	indexVal2;
  char	*result;
  int	value;
  int	retained;

  indexVal1 = my_strlen(val1) - 1;
  indexVal2 = my_strlen(val2) - 1;
  result = malloc(8 * ((indexVal2 < indexVal1 ? indexVal1 : indexVal2) + 1));
  retained = 0;
  while ((indexVal2 < indexVal1 ? indexVal1 : indexVal2) > -1)
    {
      printf("ok\n");
      if (indexVal1 < 0)
	value = (val2[indexVal2] - 48) + retained;
      else if (indexVal2 < 0)
	value = (val1[indexVal1] - 48) + retained;
      else
	value = (val1[indexVal1] - 48) + (val2[indexVal2] - 48) + retained;
      retained = (value >= 10 ? value / 10 : 0) * (my_power_rec(10, (indexVal2 < indexVal1 ? indexVal1 : indexVal2) + 3));
      value = (value >= 10 ? value % 10 : value);
      result[(indexVal2 < indexVal1 ? indexVal1 : indexVal2)] = value + 48;
      indexVal1--;
      indexVal2--;
    }
  printf("retained?:%d", retained);
  if(retained != 0)
    printf("ah oue? %s\n", add_inf(result, int_to_string(retained)));
  return (result);
}*/

/*
char	*multiply_inf(char *val1, char *val2)
{
  int	indexVal1;
  int 	indexVal2;
  char	*result;
  int	value;

  result = malloc(sizeof(char*) * (my_strlen(val1) + my_strlen(val2)));

  indexVal1 = 0;
  while (indexVal1 < my_strlen(val1))
    {
      indexVal2 = my_strlen(val2);
      while (indexVal2 > 0)
	{
	  indexVal2--;
	  value = (val1[indexVal1] - 48) * (val2[indexVal2] - 48);
	  value *= (indexVal1 == 0 ? 1 : my_power_rec(10, indexVal1));
	  printf("value: %d\n", (val1[indexVal1] - 48));
	  printf("%d x %d = %d\n", (val1[indexVal1] - 48), (val2[indexVal2] - 48), (val1[indexVal1] - 48) * (val2[indexVal2] - 48));
	  printf("from: %d, to: '%s'\n", value, int_to_string(value));
	  result = add_inf(result, int_to_string(value));
	}
      indexVal1++;
    }
  return (result);
}*/


void	equalise_numbers(char *val1, char *val2)
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
      while (index < val1len)
	{
	  newarray[index] = (index < (val1len - val2len) ? '0' : val2[index - (val1len - val2len)]);
	  index++;
	}
      newarray[index] = '\0';
      val2 = &newarray;
    }
  else
    {
      newarray = malloc(val2len * sizeof(char*));
      while (index < val2len)
	{
	  newarray[index] = (index < (val2len - val1len) ? '0' : val1[index - (val2len - val1len)]);
	  index++;
	}
      newarray[index] = '\0';
      val1 = &newarray;
    }
}

char	*add_inf(char *val1, char *val2)
{
  equalise_numbers(val1, val2);
  printf("val1: %s, val2: %s\n", val1, val2);
}
