/*
** operators.c for bistro-matic in /home/guillaume.mardon/delivery/CPool_bistro-matic/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu>
**
** Started on  Mon Oct 24 10:02:37 2016 Guillaume MARDON
** Last update Mon Oct 24 10:19:25 2016 Guillaume MARDON
*/
#include <stdio.h>
#include <stdlib.h>
#include "my_strlen.c"

char	*multiply_inf(char *val1, char *val2)
{
  int	indexVal1;
  int 	indexVal2;
  char	*result;

  result = malloc(2048);

  indexVal1 = 0;
  while (indexVal1 < my_strlen(val1))
    {
      printf("%d x %d", (val1[indexVal1] - 48), (val2[indexVal2] - 48));
      indexVal2 = 0;
      while (indexVal2 < my_strlen(val2))
	{
	  indexVal2++;
	}
      indexVal1++;
    }
}
