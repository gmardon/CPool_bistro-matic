/*
** clean_expr.c for bistro in /home/moana/Piscine/CPool_bistro-matic/parsing/
**
** Made by Moana Dumora
** Login   <moana.dumora@epitech.eu@epitech.eu>
**
** Started on  Sat Nov  5 10:39:06 2016 Moana Dumora
** Last update Sat Nov  5 10:39:09 2016 Moana Dumora
*/

#include <stdlib.h>
#include "../parsing/my_numberptr.c"

size_t	count_nbr_len(char *expr)
{
  size_t	i;
  size_t	counter;

  i = 0;
  counter = 0;
  while (expr[i] != '\0')
    {
      if (expr[i] <= '9' && expr[i] >= '0')
	{
	  counter++;
	  if (expr[i + 1] < '0' || expr[i + 1] > '9')
	    break;
	}
      i++;
    }
  return (counter);
}

size_t	count_op(char *expr)
{
  size_t	i;
  size_t	c;

  c = 0;
  i = 0;
  while (expr[i] != '\0')
    {
      if (expr[i] == '-' || expr[i] == '+' || expr[i] == '(')
	c++;
      if (expr[i + 1] != '-' && expr[i + 1] != '+' && expr[i + 1] != '(')
	return (c);
      i++;
    }
  return (0);
}

size_t	count_minus(char *expr)
{
  size_t	i;
  size_t	c;

  i = 0;
  c = 0;
  while (expr[i] != '\0')
    {
      if (expr[i] == '-')
	c++;
      if (expr[i + 1] != '-' && expr[i + 1] != '+' && expr[i + 1] != '(')
	return (c);
      i++;
    }
  return (0);
}

char	*clean_nbr(char *expr)
{
  size_t	i;
  size_t	cop;
  char		*final;
  char		*tmp;
  size_t	k;

  cop = count_op(expr);
  i = k = 0;
  tmp = malloc(sizeof(char *) * (count_nbr_len(expr) + 2));
  while (i < count_nbr_len(expr))
    {
      if (count_minus(expr) % 2 == 0)
	{
	  tmp[k] = expr[i + cop];
	  i++;
	  k++;
	}
      else
	{
	  tmp[0] = '-';
	  tmp[k + 1] = expr[i + cop];
	  i++;
	  k++;
	}
    }
  return (tmp);
}

char	*clean_expr(char *expr)
{
  return (clean_nbr(expr));
}
