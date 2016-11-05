/*
** my_strcmp.c for day6 in /home/moana.dumora/CPool_Day06/
**
** Made by Moana Dumora
** Login   <moana.dumora@epitech.eu>
**
** Started on  Mon Oct 10 16:13:24 2016 Moana Dumora
** Last update Sat Nov  5 15:48:24 2016 Victor LE DANTEC
*/

#include <stdlib.h>

size_t	my_strlen(char *);

int	my_strcmp(char *s1, char *s2)
{
  size_t	i;

  i = 0;
  if (my_strlen(s2) > my_strlen(s1))
    return (-1);
  else if (my_strlen(s2) < my_strlen(s1))
    return (1);
  else
    {
      while (s1[i] != '\0')
	{
	  if (s1[i] > s2[i])
	    return (1);
	  if (s1[i] < s2[i])
	    return (-1);
	  i++;
	}
    }
  return (0);
}
