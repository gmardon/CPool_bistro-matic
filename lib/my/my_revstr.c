/*
** my_revstr.c for my_revstr in /home/victor.le-dantec/CPool_Day06
**
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
**
** Started on  Mon Oct 10 11:45:59 2016 Victor Le Dantec
** Last update Fri Nov  4 16:17:15 2016 Victor Le Dantec
*/

#include <stdlib.h>

size_t	my_strlen(char *);

char	*my_revstr(char *str)
{
  int	i;
  int	h;
  char	p;

  i = 0;
  h = my_strlen(str) - 1;
  while (i < h)
    {
      p = str[i];
      str[i] = str[h];
      str[h] = p;
      h--;
      i++;
    }
  return (str);
}
