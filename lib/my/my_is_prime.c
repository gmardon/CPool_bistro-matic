/*
** my_is_prime.c for my_is_prime in /home/victor.le-dantec/CPool_Day05
**
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
**
** Started on  Fri Oct  7 15:58:00 2016 Victor Le Dantec
** Last update Fri Oct  7 16:41:10 2016 Victor Le Dantec
*/

int	my_is_prime(int nb)
{
  int	i;
  int	diviseurs;

  i = nb;
  diviseurs = 0;
  if (nb == 0 || nb == 1)
    return (0);
  while (i != 1)
    {
      i--;
      if (nb%i == 0)
	diviseurs++;
    }
  if (diviseurs == 1)
    return (1);
  else
    return (0);
}
