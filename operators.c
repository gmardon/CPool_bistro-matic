/*
** operators.c for bistro-matic in /home/guillaume.mardon/delivery/CPool_bistro-matic/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu>
**
** Started on  Mon Oct 24 10:02:37 2016 Guillaume MARDON
** Last update Mon Oct 24 11:08:13 2016 Guillaume MARDON
*/
#include <stdio.h>
#include <stdlib.h>
#include "my_strlen.c"

char	*multiply_inf(char *val1, char *val2)
{
  int	indexVal1;
  int 	indexVal2;
  char	*result;

  result = malloc(sizeof(char*) * (my_strlen(val1) + my_strlen(val2)));

  indexVal1 = 0;
  while (indexVal1 < my_strlen(val1))
    {
      indexVal2 = my_strlen(val2);
      while (indexVal2 > 0)
	{
	  indexVal2--;
	  printf("%d x %d = %d\n", (val1[indexVal1] - 48), (val2[indexVal2] - 48), (val1[indexVal1] - 48) * (val2[indexVal2] - 48));
	}
      // ADD ONE 0
      indexVal1++;
    }
}

char	*add_inf(char *val1, char *val2)
{
  int	index;
  char	*result;
  int	value;
  char	retained;

  result = malloc(8 * ((my_strlen(val2) < my_strlen(val1) ? my_strlen(val1) : my_strlen(val2)) + 1));

  index = my_strlen(val1);
  retained = 0;
  while (index > 0)
    {
      index--;
      value = (val1[index] - 48) + (val2[index] - 48) + retained;
      if (value >= 10)
	{
	  retained = value / 10;
	  value = value % 10;
	}
      result[index] = value + 48;
    }
  return (result);
}
