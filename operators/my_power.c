/*
** my_power.c for bistro in /home/moana/Piscine/CPool_bistro-matic/operators/
**
** Made by Moana Dumora
** Login   <moana.dumora@epitech.eu@epitech.eu>
**
** Started on  Sun Nov  6 09:33:36 2016 Moana Dumora
** Last update Sun Nov  6 09:33:40 2016 Moana Dumora
*/

#include <stdlib.h>

size_t	my_strlen(char *);

size_t  char_to_size(char *nbr)
{
  size_t        index;
  size_t        total;

  index = 0;
  total = 0;
  while (index <= my_strlen(nbr) - 1)
    {
      total = total * 10 + (nbr[index] - '0');
      index++;
    }
  return (total);
}

size_t	get_result_size(char *nbr, char *pow)
{
  size_t	i;
  size_t	cpow;

  cpow = char_to_size(pow);
  i = 0;
  while (cpow > 0)
    {
      i = i + my_strlen(nbr);
      cpow--;
    }
  return (i);
}

char	*power(char *nbr, char *pow)
{
  char		*final;
  size_t	aloc;
  size_t	save;

  aloc = get_result_size(nbr, pow);
  final = malloc(sizeof(char *) * (aloc + 1));
  aloc = char_to_size(pow);
  save = aloc;
  if (pow[0] == '1'&& pow[1] == '\0')
    return (nbr);
  while (aloc + 1 > char_to_size(pow) - save + 2)
    {
      if (aloc == char_to_size(pow))
	final = multiply(nbr, nbr);
      else
	final = multiply(final, nbr);
      aloc = aloc - 1;
    }
  return (final);
}
