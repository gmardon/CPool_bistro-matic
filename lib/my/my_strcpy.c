/*
** my_strcpy.c for my_strcpy in /home/victor.le-dantec/CPool_Day06
** 
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
** 
** Started on  Mon Oct 10 11:07:09 2016 Victor Le Dantec
** Last update Mon Oct 10 15:36:49 2016 Victor Le Dantec
*/
char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (i < my_strlen(src) && src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  while (i < my_strlen(src))
    {
      dest[i] = '\0';
      i++;
    }
}
