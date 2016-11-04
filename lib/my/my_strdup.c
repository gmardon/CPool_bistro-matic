/*
** my_strdup.c for my_strdup in /home/victor.le-dantec/CPool_Day08
** 
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
** 
** Started on  Wed Oct 12 10:18:00 2016 Victor Le Dantec
** Last update Fri Nov  4 16:06:12 2016 Victor Le Dantec
*/

#include <stdlib.h>

size_t	my_strlen(char *);

char	*my_strdup(char *src)
{
  int	i;
  int	j;
  char	*str;

  j = 0;
  i = my_strlen(src);
  str = malloc(sizeof(char) * (i + 1));
  while (j < i)
    {
      str[j] = src[j];
      j++;
    }
  str[j] = '\0';
  return (str);
}
