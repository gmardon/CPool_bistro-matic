/*
** my_putnbr.c for my_putnbr in /home/victor.le-dantec/CPool_Day07
** 
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
** 
** Started on  Tue Oct 11 09:57:18 2016 Victor Le Dantec
** Last update Fri Nov  4 16:11:48 2016 Victor Le Dantec
*/

void	my_putchar(char);

int	my_put_nbr(int nb)
{
  int	i;

  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb >= 0)
    {
      if (nb >= 10)
	{
	  i = nb % 10;
	  nb = (nb - i) / 10;
	  my_put_nbr(nb);
	  my_putchar(48 + i);
	}
      else
	my_putchar(48 + nb % 10);
    }
}
