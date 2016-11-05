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

size_t	get_result_size(char *nbr, char *size_base, char *newnbr)
{
  size_t	i;

  i = 0;
  while (nbr[0] != '0')
    {
      newnbr = divide(nbr, size_base);
      nbr = newnbr;
      i++;
    }
  return (i);
}

char	*ten_to_base(char *nbr, char *base)
{
  char		*final;
  char		*newnbr;
  char		*remainder;
  char		*size_base;
  size_t	i;
  size_t	r;

  size_base = size_to_str(my_strlen(base));
  newnbr = malloc(sizeof(char *) * (my_strlen(nbr) + 1));
  i = get_result_size(nbr, size_base, newnbr) - 1;
  final = malloc(sizeof(char *) * (i + 1));
  if (nbr[0] == '0')
    {
      final[0] = base[0];
      final[1] = '\0';
      return (final);
    }
  while (nbr[0] != '0')
    {
      newnbr = divide(nbr,size_base);
      remainder = modulo(nbr, size_base);
      nbr = newnbr;
      r = char_to_size(remainder);
      final[i] = base[r];
      i--;
    }
  return (final);
}
