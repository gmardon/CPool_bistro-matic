/*
** int_to_string.c for bistro in /home/moana.dumora/Piscine/CPool_bistro-matic/
**
** Made by Moana Dumora
** Login   <moana.dumora@epitech.eu@epitech.eu>
**
** Started on  Mon Oct 24 13:42:29 2016 Moana Dumora
** Last update Wed Oct 26 06:52:38 2016 Guillaume MARDON
*/

char	*int_to_string(int nb)
{
  int	strsize;
  char 	*str;
  int	nb2;
  int	index;
  int 	written;

  nb2 = nb;
  strsize = 0;
  while (nb2 != 0) //(nb2 /= 10) % 10 == 0)
    {
      nb2 /= 10;
      strsize++;
    }
  str = malloc(8 * (strsize) + 1);
  index = 0;
  if (nb < 0)
    {
      nb *= (-1);
      str[index++] = '-';
    }
  written = 0;
  while (nb >= 10)
    {
      str[index] = ((nb / my_power_rec(10, strsize - (index + 1)) + 48));
      index++;
      nb -= (nb / my_power_rec(10, strsize - (index))
	     * my_power_rec(10, strsize - (index)));
      written++;
    }

  if (nb >= 0 && nb <= 9)
    {
      written++;
      str[index++] = (48 + nb % 10);
    }
  while (written++ < strsize)
      str[index++] = '0';

  str[index] = '\0';
  return (str);
}
