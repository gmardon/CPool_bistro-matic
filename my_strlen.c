/*
** my_strlen.c for my_strlen in /home/guillaume.mardon/delivery/CPool_Day04
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.net>
**
** Started on  Thu Oct  6 09:14:26 2016 Guillaume MARDON
** Last update Tue Oct 11 08:03:27 2016 Guillaume MARDON
*/
int 	my_putchar(char c);

int 	my_strlen(char *c)
{
  char 	actual;
  int 	index;

  index = 0;
  actual = c[0];

  while (actual != '\0')
    {
      index++;
      actual = c[index];
    }

  return index;
}
