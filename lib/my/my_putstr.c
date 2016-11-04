/*
** my_putstr.c for my_putstr in /home/victor.le-dantec/CPool_Day04
** 
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
** 
** Started on  Thu Oct  6 13:17:46 2016 Victor Le Dantec
** Last update Fri Nov  4 16:18:22 2016 Victor Le Dantec
*/

#include <stdlib.h>

size_t	*my_strlen(char *);
void	write(int, void *, size_t);

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}
