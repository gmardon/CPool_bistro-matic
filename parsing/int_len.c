/*
** int_len.c for bistro in /home/moana/Piscine/CPool_bistro-matic/parsing/
**
** Made by Moana Dumora
** Login   <moana.dumora@epitech.eu@epitech.eu>
**
** Started on  Sun Oct 30 17:45:59 2016 Moana Dumora
** Last update Sun Oct 30 17:46:13 2016 Moana Dumora
*/

#include <stdlib.h>
#include <stdio.h>

int     int_len(char *str)
{
  int   i;
  int   k;

  i = 0;
  while(str[i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	  k++;
	  if (str[i + 1] > '9' || str[i + 1] < '0')
	    return (k);
	}
      i++;
    }
  return (0);
}
