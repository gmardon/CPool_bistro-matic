/*
** my_getnbr.c for my_getnbr in /home/victor.le-dantec/CPool_Day07
**
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
**
** Started on  Tue Oct 11 10:20:56 2016 Victor Le Dantec
** Last update Tue Oct 11 13:35:28 2016 Victor Le Dantec
*/

int	my_getnbr(char *str)
{
  int	signe;
  int	resultat;

  signe = 1;
  resultat = 0;
  while (*str == '-' || *str == '+')
    {
      if (*str == '-')
	signe = -signe;
      str = str + 1;
    }
  while (*str != '\0' && *str >= '0' && *str <= '9')
    {
      if (resultat > 214748364)
	return (0);
      if (resultat == 214748364 && *str > 7 && signe == 1)
	return (0);
      if (resultat == 214748364 && *str > 8 && signe == -1)
	return (0);
      resultat = resultat * 10 + *str - 48;
      str = str + 1;
    }
  if (signe == -1)
    resultat = -resultat;
  return (resultat);
}
