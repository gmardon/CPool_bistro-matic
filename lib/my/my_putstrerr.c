/*
** my_putstr.c for my_putstr in /home/victor.le-dantec/CPool_Day04
** 
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
** 
** Started on  Thu Oct  6 13:17:46 2016 Victor Le Dantec
** Last update Tue Oct 18 10:25:20 2016 Victor Le Dantec
*/
int	my_putstrerr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      write(2, str[i], 1);
      i++;
    }
}
