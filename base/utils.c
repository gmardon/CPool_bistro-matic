/*
** utils.c for convert_base in /home/victor.le-dantec/Pool/CPool_bistro-matic
** 
** Made by Victor LE DANTEC
** Login   <victor.le-dantec@epitech.eu>
** 
** Started on  Sat Nov  5 11:30:44 2016 Victor LE DANTEC
** Last update Sat Nov  5 11:31:52 2016 Victor LE DANTEC
*/

#include <stdlib.h>

size_t	my_strlen(char *);

char    *etvalbase(char *base)
{
  int   i;
  char  *val_base;

  i = 0;
  val_base = malloc(sizeof(char *) * (my_strlen(base) + 1));
  while (i < my_strlen(base))
    {
      val_base[i] = i + '0';
      i++;
    }
  return (val_base);
}

char    *size_to_str(size_t total)
{
  size_t        tmp;
  size_t        i;
  char          *str;

  i = 0;
  tmp = total;
  while (tmp > 0)
    {
      i++;
      tmp = tmp / 10;
    }
  str = malloc(sizeof(char *) * (i + 1));
  while (i > 0)
    {
      tmp = 0;
      tmp = total % 10;
      total = total / 10;
      str[i - 1] = tmp + '0';
      i--;
    }
  return (str);
}

int     clean_zero(char *nbr, char *base)
{
  size_t        i;

  i = 0;
  while (nbr[i] != '\0')
    {
      if (nbr[i] != base[0])
        return (1);
      i++;
    }
  return (84);
}
