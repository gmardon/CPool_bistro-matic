/*
** error2.c for bistro in /home/moana/Piscine/CPool_bistro-matic/base/
**
** Made by Moana Dumora
** Login   <moana.dumora@epitech.eu@epitech.eu>
**
** Started on  Fri Nov  4 16:02:33 2016 Moana Dumora
** Last update Fri Nov  4 19:06:44 2016 Victor Le Dantec
*/

#include <stdlib.h>
#include "error.h"

int	check_parent_op(char *expr)
{
  size_t	i;

  i = 0;
  while (expr[i]!= '\0')
    {
      if (expr[i] == '(' && (expr[i - 1] >= '0' && expr[i - 1] <= '9'))
	return (84);
      if (expr[i] == '(')
	{
	  if (expr[i + 1] == '*' || expr[i + 1] == '/' || expr[i + 1] == '%')
	    return (84);
	}
      if (expr[i] == ')')
	{
	  if (expr[i - 1] == '*' || expr[i - 1] == '/' || expr[i - 1] == '%')
	    return (84);
	}
      i++;
    }
  return (0);
}

int	check_multiple_op(char *expr)
{
  size_t	i;

  i = 0;
  while (expr[i] != '\0')
    {
      if (expr[i] == '*' || expr[i] == '/' || expr[i] == '%')
	{
	  if ((expr[i + 1] < '0' || expr[i + 1] > '9') && expr[i + 1] != '(')
	    return (84);
	}
      if (expr[i] == '+' || expr[i] == '-')
	{
	  if ((expr[i + 1] != '+' || expr[i + 1] != '-')
	      && (expr[i + 1] < '0'|| expr[i + 1] > '9') && expr[i + 1] != '(')
	    return (84);
	}
      i++;
    }
  return (0);
}
