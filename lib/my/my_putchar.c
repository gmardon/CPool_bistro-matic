/*
** my_putchar.c for my_putchar in /home/victor.le-dantec/CPool_Day07
** 
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
** 
** Started on  Tue Oct 11 09:53:11 2016 Victor Le Dantec
** Last update Fri Nov  4 16:15:52 2016 Victor Le Dantec
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
