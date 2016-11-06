/*
** utils.c for bistro-matic in /home/guillaume.mardon/delivery/CPool_bistro-matic/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu>
**
** Started on  Wed Oct 26 07:01:21 2016 Guillaume MARDON
** Last update Sun Nov  6 10:26:19 2016 Victor LE DANTEC
*/
#include "utils.h"

char	*substr(char *src, int bindex)
{
  char	*result;
  int	length;
  int 	index;

  index = 0;
  length = my_strlen(src);
  result = malloc(8 * (length - bindex));
  while (index < length)
    {
      result[index] = src[index + bindex];
      index++;
    }
  return (result);
}

void	*put_nbr_with_offset(char *str, int number, int zcount)
{
  int	length;
  int	index;

  length = my_strlen(str);
  index = 0;
  while (zcount != index)
    str[length - (index++)] = '0';
  if (number >= 10)
    {
      str[length - (index++)] = (number % 10) + 48;
      number /= 10;
    }
  str[length - index] = number + 48;
}

void	*put_chars_with_offset(char *str, char *with, int zcount)
{
  int	length;
  int	index;

  length = my_strlen(with);
  index = 0;
  while (index < length)
    {
      str[index] = *(with + index);
      index++;
    }
  while (zcount != 0)
    {
      str[index++] = '0';
      zcount--;
    }
  return (str);
}

int	is_greater(char *val1, char *val2)
{
  int 	index;

  index = 0;
  if (my_strlen(val1) < my_strlen(val2))
    val1 = equalise_numbers(val1, val2);
  else if (my_strlen(val1) > my_strlen(val2))
    val2 = equalise_numbers(val1, val2);
  while (val1[index] == val2[index])
    {
      if (val1[index] == '\0' && val2[index] == '\0')
	return (0);
      index++;
    }
  if (val1[index] == '-')
    return -1;
  else if (val2[index] == '-')
    return 1;
  return (val1[index] < val2[index] ? -1 : 1);
}

void    *put_with_offset(char *str, int number, int zcount)
{
  int	length;
  int	index;

  length = my_strlen(str);
  index = 0;
  while (zcount != index)
    str[length - (index++)] = '0';
  if (number >= 10)
    {
      str[length - (index++)] = (number % 10) + 48;
      number /= 10;
    }
  str[length - index] = number + 48;
}
