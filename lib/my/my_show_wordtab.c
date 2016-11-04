/*
** my_show_wordtab.c for my_show_wordtab in /home/victor.le-dantec/CPool_Day08/task03
** 
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
** 
** Started on  Wed Oct 12 13:32:31 2016 Victor Le Dantec
** Last update Fri Nov  4 16:05:45 2016 Victor Le Dantec
*/

#include <stdlib.h>

void	my_putchar(char);
void	my_putstr(char *);

int	my_show_wordtab(char **tab)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  while (tab[i] != 0)
    {
      n++;
      i++;
    }
  i = 0;
  while (i < n)
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i++;
    }
}
