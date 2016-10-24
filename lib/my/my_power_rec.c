/*
** my_power_rec.c for my_power_rec in /home/victor.le-dantec/temp
** 
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
** 
** Started on  Fri Oct  7 11:01:09 2016 Victor Le Dantec
** Last update Tue Oct 11 13:12:28 2016 Victor Le Dantec
*/
int	my_power_rec(int nb, int p)
{
  int result;

  if (p == 0)
    return (1);
  if (p < 0)
    return (0);
  result = nb * my_power_rec(nb, p-1);
  if (result >= 2147483647)
    return (0);
  return (result);
}
