/*
** ten_to_base.c for bistro in /home/moana/Piscine/CPool_bistro-matic/base/
**
** Made by Moana Dumora
** Login   <moana.dumora@epitech.eu@epitech.eu>
**
** Started on  Tue Nov  1 19:43:28 2016 Moana Dumora
** Last update Thu Nov  3 15:01:57 2016 Victor Le Dantec
*/

#include <stdio.h>
#include <stdlib.h>

size_t	my_strlen(char *);

size_t	char_to_size(char *nbr)
{
  size_t	index;
  size_t	total;

  index = 0;
  total = 0;
  while (index <= my_strlen(nbr) - 1)
    {
      total = total * 10 + (nbr[index] - '0');
      index++;
    }
  return (total);
}

size_t	get_result_size(size_t n, size_t b, size_t d)
{
  size_t	i;

  i = 0;
  while (n != 0)
    {
      d = n / b;
      n = d;
      i++;
    }
  return (i);
}

char	*ten_to_base(char *nbr, char *base)
{
  size_t	n;
  char		*m;
  size_t	d;
  size_t	r;
  size_t	b;
  size_t	i;

  b = my_strlen(base);
  n = char_to_size(nbr);
  i = get_result_size(n, b, d) - 1;
  m = malloc(sizeof(char *) * (i + 1));
  while (n != 0)
    {
      d = n / b;
      r = n % b;
      n = d;
      m[i] = base[r];
      i--;
    }
  return (m);
}
