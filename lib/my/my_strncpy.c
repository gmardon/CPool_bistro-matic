/*
** my_strncpy.c for my_strncpy in /home/victor.le-dantec/CPool_Day06
**
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
**
** Started on  Mon Oct 10 11:07:09 2016 Victor Le Dantec
** Last update Mon Oct 10 15:37:22 2016 Victor Le Dantec
*/

char	*my_strncpy(char *dest, char *src, int d)
{
  int	i;

  i = 0;
  while (i < d && src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  while (i < d)
    {
      dest[i] = '\0';
      i++;
    }
}
