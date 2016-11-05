/*
** my_str_isalpha.c for my_str_isalpha in /home/victor.le-dantec/CPool_Day06
**
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
**
** Started on  Mon Oct 10 18:57:12 2016 Victor Le Dantec
** Last update Mon Oct 10 20:16:12 2016 John Doe
*/

int	my_str_isalpha(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      if (!((str[i] >= 'a' && str[i] <= 'z')
	    || (str[i] >= 'A' && str[i] <= 'Z')))
	return (0);
      i++;
    }
  return (1);
}
