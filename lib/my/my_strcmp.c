/*
** my_strcmp.c for my_strcmp in /home/victor.le-dantec/CPool_Day06
** 
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
** 
** Started on  Mon Oct 10 15:59:44 2016 Victor Le Dantec
** Last update Tue Oct 11 13:22:50 2016 Victor Le Dantec
*/
int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  if (s1 == '\0')
    return (0);
  while (s1[i] != '\0' && s2[i] != '\0')
    {
      if (s1[i] > s2[i])
	return (1);
      if (s1[i] < s2[i])
	return (-1);
      i++;
    }
  if (s1[i] != '\0')
    return (1);
  if (s2[i] != '\0')
    return (-1);
  return (0);
}
