/*
** int_to_string.c for bistro in /home/moana.dumora/Piscine/CPool_bistro-matic/
**
** Made by Moana Dumora
** Login   <moana.dumora@epitech.eu@epitech.eu>
**
** Started on  Mon Oct 24 13:42:29 2016 Moana Dumora
** Last update Mon Oct 24 14:03:32 2016 Moana Dumora
*/

char	*int_to_string(int nb)
{
  int	i;
  char	*str;

  i = 0;
  str = malloc(8 * 10);
  while (nb > 0)
    {
      str[i] = (nb % 10) + 48;
      nb = (nb / 10);
      i++;
    }
  return (str);
}
