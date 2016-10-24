/*
** my_strstr.c for my_strstr in /home/victor.le-dantec/CPool_Day06
** 
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
** 
** Started on  Mon Oct 10 14:22:46 2016 Victor Le Dantec
** Last update Mon Oct 10 15:36:18 2016 Victor Le Dantec
*/
char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	f;
  int	debut;

  i = 0;
  f = 0;
  debut = 0;
  while (str[i] != 0 && to_find[f] != 0)
    {
      if (str[i] == to_find[f])
	{
	  if (f == 0)
	    debut = i;
	  f++;
	}
      else
	f = 0;
      i++;
    }
  if (to_find[f] == 0)
    return (&str[debut]);
  else
    return (0);
}
