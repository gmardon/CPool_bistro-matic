/*
** error.c for bistro in /home/moana/Piscine/CPool_bistro-matic/base/
**
** Made by Moana Dumora
** Login   <moana.dumora@epitech.eu>
**
** Started on  Thu Nov  3 13:25:01 2016 Moana Dumora
** Last update Thu Nov  3 13:25:05 2016 Moana Dumora
*/

#include <stdlib.h>
#include "error.h"

size_t	my_strlen(char *);

int	error_base(char *base, char *nbr)
{
  size_t	n;
  size_t	b;

  n = 0;
  b = 0;
  while (n != my_strlen(nbr))
    {
      if (base[b] == nbr[n])
	{
	  n++;
	  b = 0;
	}
      else if (base[b] != nbr[n] && b == my_strlen(base) - 1)
	return (EXIT_BASE);
      else if (base[b] != nbr[n])
	b++;
    }
  return (0);
}

int	error_cmp_op_base(char *base, char *op)
{
  size_t	b;
  size_t	o;

  o = 0;
  b = 0;
  while (o != my_strlen(op))
    {
      if (base[b] != op[o] && b == my_strlen(base) - 1)
	{
	  b = 0;
	  o++;
	}
      else if (base[b] == op[o])
	return (EXIT_OPS);
      else if (base[b] != op[o])
	b++;
    }
  return (0);
}
