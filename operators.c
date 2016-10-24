/*
** operators.c for bistro-matic in /home/guillaume.mardon/delivery/CPool_bistro-matic/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu>
**
** Started on  Mon Oct 24 10:02:37 2016 Guillaume MARDON
** Last update Mon Oct 24 12:50:56 2016 Guillaume MARDON
*/
#include <stdio.h>
#include <stdlib.h>

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
  int	indexVal1;
  int	indexVal2;
  int	index;
  char	*result;
  int	value;
  char	retained;

  indexVal1 = my_strlen(val1);
  indexVal2 = my_strlen(val2);
  index = (indexVal2 < indexVal1 ? indexVal1 : indexVal2);
  result = malloc(8 * ((index) + 1));
  retained = 0;
  while (index > 0)
    {
      indexVal1--;
      indexVal2--;
      index--;
      value = (indexVal1 < 0 ? (val2[indexVal2] - 48) : 0) + retained;
      value += (indexVal2 < 0 ? (val2[indexVal1] - 48) : 0);
      if (value >= 10)
	{
	  retained = value / 10;
	  value = value % 10;
	}
      else
	retained = 0;
      result[index] = value + 48;
    }
  return (result);
}
