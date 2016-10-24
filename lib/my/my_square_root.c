/*
** my_square_root.c for my_square_root in /home/victor.le-dantec/temp
** 
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
** 
** Started on  Fri Oct  7 11:43:17 2016 Victor Le Dantec
** Last update Fri Oct  7 16:14:36 2016 Victor Le Dantec
*/
int	my_square_root(int nb)
{
  int	i;

  i = 0;
  while (i <= nb)
    {
      if (nb == i * i)
	return (i);
      i++;
    }
  return (0);
}
