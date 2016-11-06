/*
** utils2.c for operators in /home/victor.le-dantec/Pool/CPool_bistro-matic
** 
** Made by Victor LE DANTEC
** Login   <victor.le-dantec@epitech.eu>
** 
** Started on  Sun Nov  6 10:23:35 2016 Victor LE DANTEC
** Last update Sun Nov  6 10:25:26 2016 Victor LE DANTEC
*/

#include "utils.h"

char    *remove_zeros(char *str)
{
  if (*str == '\0')
    return str;
  if (*(str + 1) == '\0')
    return str;
  while (*str == '0' && *(str + 1) != '\0')
    str++;
  return (str);
}

char    *clean_negation(char *str)
{
  char  *nstr;

  while (*str == '-' && *(str + 1) != '\0' && is_neg(str + 1))
    str++;
  nstr = malloc(sizeof(char *) * (my_strlen(str)));
  my_strcpy(nstr, str);
  return (nstr);
}

char    *set_negative(char *str)
{
  char  *nstr;
  int   index;

  str = remove_zeros(str);
  nstr = malloc(sizeof(char *) * (my_strlen(str) + 1));
  my_strcpy(nstr + 1, str);
  nstr[0] = '-';
  return (nstr);
}

char    *equalise_numbers(char *val1, char *val2)
{
  int   val1len;
  int   val2len;
  int   biggerlen;
  char  *newarray;
  int   index;

  val1len = my_strlen(val1);
  val2len = my_strlen(val2);
  index = 0;
  if (val1len > val2len)
    {
      newarray = malloc(val1len * sizeof(char*));
      while (index++ < val1len)
        newarray[index - 1] = ((index - 1) < (val1len - val2len)
                               ? '0' : val2[(index - 1) - (val1len - val2len)\
					    ]);
    }
  else
    {
      newarray = malloc(val2len * sizeof(char*));
      while (index++ < val2len)
        newarray[index - 1] = ((index - 1) < (val2len - val1len)
                               ? '0' : val1[(index - 1) - (val2len - val1len)\
					    ]);
    }
  return (newarray);
}

char    *str_set_zero(char *str, int size)
{
  int   index;

  index = 0;
  while (index < size)
    str[index++] = '0';
}
