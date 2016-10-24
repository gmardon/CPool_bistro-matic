/*
** my_putstr.c for my_putstr in /home/victor.le-dantec/CPool_Day04
** 
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
** 
** Started on  Thu Oct  6 13:17:46 2016 Victor Le Dantec
** Last update Thu Oct  6 19:12:05 2016 Victor Le Dantec
*/
int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}
