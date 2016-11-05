/*
** my_strcat.c for my_strcat in /home/victor.le-dantec/CPool_Day07
**
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
**
** Started on  Tue Oct 11 16:20:10 2016 Victor Le Dantec
** Last update Fri Nov  4 16:16:58 2016 Victor Le Dantec
*/

#include <stdlib.h>

size_t	my_strlen(char *);

char	*my_strcat(char *dest, char *src)
{
  int	destlen;
  int	i;

  i = 0;
  destlen = my_strlen(dest);
  while (src[i] != '\0')
    {
      dest[destlen + i] = src[i];
      i++;
    }
  dest[destlen + i] = '\0';
  return (dest);
}
