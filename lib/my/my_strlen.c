/*
** my_strlen.c for my_strlen in /home/victor.le-dantec/CPool_Day04
** 
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
** 
** Started on  Thu Oct  6 13:48:22 2016 Victor Le Dantec
** Last update Thu Oct  6 15:53:07 2016 Victor Le Dantec
*/

#include <stdlib.h>

int	my_strlen(char *str)
{
  size_t	i;
  int		nbr;

  i = 0;
  nbr = 0;
  while (str[i] != '\0')
    {
      nbr++;
      i++;
    }
  return (nbr);
}
