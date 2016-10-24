/*
** my_strncat.c for my_strncat in /home/victor.le-dantec/CPool_Day07
** 
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
** 
** Started on  Tue Oct 11 16:20:10 2016 Victor Le Dantec
** Last update Tue Oct 11 17:39:38 2016 Victor Le Dantec
*/
char	*my_strncat(char *dest, char *src, int n)
{
  int	destlen;
  int	i;
  
  i = 0;
  destlen = my_strlen(dest);
  while (src[i] != '\0' && i < n)
    {
      dest[destlen + i] = src[i];
      i++;
    }
  dest[destlen + i] = '\0';
  return (dest);
}
