/*
** my_strlowcase.c for my_strlowcase in /home/victor.le-dantec/CPool_Day06
**
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
**
** Started on  Mon Oct 10 17:45:05 2016 Victor Le Dantec
** Last update Mon Oct 10 18:04:59 2016 Victor Le Dantec
*/

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	str[i] = str[i] + 32;
      i++;
    }
  return (str);
}
