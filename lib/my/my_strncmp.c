/*
** my_strncmp.c for my_strncmp in /home/victor.le-dantec/CPool_Day06
**
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
**
** Started on  Mon Oct 10 15:59:44 2016 Victor Le Dantec
** Last update Tue Oct 11 09:02:13 2016 Victor Le Dantec
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (*s1 && n > 0)
    {
      if (*s1 != *s2)
	return (*s1 - *s2);
      s1++;
      s2++;
      n--;;
    }
  return (0);
}
