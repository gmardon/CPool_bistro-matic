/*
** my_isneg.c for my_isneg in /home/victor.le-dantec/CPool_Day03
** 
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
** 
** Started on  Wed Oct  5 11:19:48 2016 Victor Le Dantec
** Last update Fri Nov  4 16:12:47 2016 Victor Le Dantec
*/

void	my_putchar(char);

int	my_isneg(int n)
{
  if (n >= 0)
      my_putchar('P');
  else
      my_putchar('N');
  return (0);
}
