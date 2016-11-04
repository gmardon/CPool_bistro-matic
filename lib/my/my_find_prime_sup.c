/*
** my_find_prime_sup.c for my_find_prime_sup in /home/victor.le-dantec/CPool_Day07
** 
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
** 
** Started on  Tue Oct 11 14:03:04 2016 Victor Le Dantec
** Last update Fri Nov  4 16:14:59 2016 Victor Le Dantec
*/

int	my_is_prime(int);

int	my_find_prime_sup(int nb)
{
  int	i;

  while ((i = my_is_prime(nb) == 0))
    nb++;
  return (nb);
}
