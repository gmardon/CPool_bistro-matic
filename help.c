/*
** help.c for bistro-matic in /home/victor/Piscine/CPool_bistro-matic
**
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
**
** Started on  Fri Nov  4 17:34:29 2016 Victor Le Dantec
** Last update Fri Nov  4 17:35:20 2016 Victor Le Dantec
*/

void	my_putstr(char *);
void	my_putchar(char);

void    display_help()
{
  my_putstr("USAGE\n");
  my_putstr("           ./calc base operators size_read\n");
  my_putchar('\n');
  my_putstr("DESCRIPTION\n");
  my_putstr("           base       all the symbols of the base\n");
  my_putstr("           operators  ");
	my_putstr("the symbols for the parentheses and the 5 operators\n");
  my_putstr("           size_read  numbers of characters to be read\n");
}
