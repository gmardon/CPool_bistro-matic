/*
** int_to_string.c for bistro in /home/moana.dumora/Piscine/CPool_bistro-matic/
**
** Made by Moana Dumora
** Login   <moana.dumora@epitech.eu@epitech.eu>
**
** Started on  Mon Oct 24 13:42:29 2016 Moana Dumora
** Last update Mon Oct 24 16:38:36 2016 Moana Dumora
*/

char	*int_to_string(int nb)
{
  int	i;
  int	nb2;
  char	*str;

  i = 0;
  nb2 = nb;
  while (nb2 != 0)
    {
      nb2 = nb2 / 10;
      i++;
    }
  (nb < 0) ? i++ : 0;
  str = malloc(8 * (i + 1));
  (nb == 0) ? str[0] = '0' : 0;
  (nb < 0) ? str[0] = '-' : 0;
  (nb < 0) ? nb = nb * -1 : 0;
  while (i > 1)
    {
      str[i - 1] = nb % 10 + 48;
      nb = nb / 10;
      i--;
    }
  return (str);
}
