/*
** my_strcapitalize.c for my_strcapitalize in /home/victor.le-dantec/CPool_Day06
**
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
**
** Started on  Mon Oct 10 18:20:15 2016 Victor Le Dantec
** Last update Mon Oct 10 20:17:03 2016 John Doe
*/
char	*my_strcapitalize(char *str)
{
  int	i;

  i = 0;
  if (str[i] >= 'a' && str[i] <= 'z')
    str[i] = str[i] - 32;
  while (str[i] != 0)
    {
      if (str[i] == ' ' || str[i] == '-' || str[i] == '+')
	{
	  if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
	    str[i + 1] = str[i + 1] - 32;
	}
      i++;
    }
  return (str);
}
