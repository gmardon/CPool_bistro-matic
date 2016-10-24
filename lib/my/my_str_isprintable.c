/*
** my_str_isprintable.c for my_str_isprintable in /home/victor.le-dantec/CPool_Day06
** 
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
** 
** Started on  Mon Oct 10 17:45:05 2016 Victor Le Dantec
** Last update Mon Oct 10 19:30:13 2016 Victor Le Dantec
*/
char	*my_str_isprintable(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      if (!(str[i] >= 32 && str[i] <= 255))
	return (0);
      i++;
    }
  return (1);
}
