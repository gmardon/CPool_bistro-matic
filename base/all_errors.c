/*
** all_errors.c for bistro in /home/moana/Piscine/CPool_bistro-matic/base/
**
** Made by Moana Dumora
** Login   <moana.dumora@epitech.eu@epitech.eu>
**
** Started on  Fri Nov  4 15:00:37 2016 Moana Dumora
** Last update Fri Nov  4 15:00:40 2016 Moana Dumora
*/

#include "error.h"
#include "error.c"
#include "error2.c"
#include <stdlib.h>

size_t	my_strlen(char *);

void	my_putstr_err(char *str)
{
  write(2, str, my_strlen(str));
}

void	my_put_err()
{
  my_putstr_err(SYNTAX_ERROR_MSG);
  my_putchar('\n');
}

int	check1(char *expr, char *base_op, char *base)
{
  if (error_base_nbr(base, expr) != 0)
    return (EXIT_BASE);
  else if (error_cmp_op_base(base, base_op) != 0)
    return (EXIT_OPS);
  else if (doublechar_in_base(base) != 0)
    return (EXIT_BASE);
  else if (check_parent(expr) != 0)
    return (EXIT_OPS);
  else if (doubleop_in_baseop(base_op) != 0)
    return (EXIT_OPS);
  else if (check_parent_op(expr) != 0)
    return (EXIT_OPS);
  else if (check_multiple_op(expr) != 0)
    return (EXIT_OPS);
  else
    return (0);
}

int	all_check(char *expr, char *base, char *base_op)
{
  if (check1 != 0)
    {
      my_put_err();
      return (EXIT_BASE);
    }
  else
    return (0);
}
