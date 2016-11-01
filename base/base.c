/*
** base.c for bistro in /home/moana/Piscine/CPool_bistro-matic/base/
**
** Made by Moana Dumora
** Login   <moana.dumora@epitech.eu@epitech.eu>
**
** Started on  Mon Oct 31 15:29:25 2016 Moana Dumora
** Last update Mon Oct 31 17:29:28 2016 Moana Dumora
*/

#include <stdio.h>
#include <stdlib.h>

int	my_strlen(char *);

int	my_power_rec(int, int);

char	*etvalbase(char *base)
{
  int	i;
  char	*val_base;

  i = 0;
  val_base = malloc(sizeof(char *) * (my_strlen(base) + 1));
  while (i < my_strlen(base))
    {
      val_base[i] = i + '0';
      i++;
    }
  return (val_base);
}

void	size_to_str(ssize_t total)
{
  ssize_t	i;

  i = 0;
}

char	*convert_to_ten(char *nbr, char *base)
{
  ssize_t	total;
  ssize_t	index;
  ssize_t	kindex;
  ssize_t	pow;
  char		*val_base;

  pow = my_strlen(nbr) - 1;
  val_base = malloc(sizeof(char *) * (my_strlen(base) + 1));
  total = index = kindex = 0;
  val_base = etvalbase(base);
  while (nbr[index] != '\0')
    {
      if (nbr[index] == base[kindex])
	{
	  total += my_power_rec(my_strlen(base), pow) * (val_base[kindex] - 48);
	  index++;
	  kindex = 0;
	  pow--;
	}
      else
	kindex++;
    }
  printf("%zu\n", total);
}
