/*
** convert_op.c for bistro in /home/moana/Piscine/CPool_bistro-matic/base/
**
** Made by Moana Dumora
** Login   <moana.dumora@epitech.eu>
**
** Started on  Thu Nov  3 09:16:32 2016 Moana Dumora
** Last update Thu Nov  4 15:18:37 2016 Moana Dumora
*/

#include <stdlib.h>
#define OP_OPEN_PARENT_IDX  0
#define OP_CLOSE_PARENT_IDX 1
#define OP_PLUS_IDX         2
#define OP_SUB_IDX          3
#define OP_MULT_IDX         4
#define OP_DIV_IDX          5
#define OP_MOD_IDX          6

void	base_op_convert(char *expr, char *base_op)
{
  size_t	i;

  i = 0;
  while (expr[i] != '\0')
    {
      if (expr[i] == base_op[OP_OPEN_PARENT_IDX])
	expr[i] = '(';
      else if (expr[i] == base_op[OP_CLOSE_PARENT_IDX])
	expr[i] = ')';
      else if (expr[i] == base_op[OP_PLUS_IDX])
	expr[i] = '+';
      else if (expr[i] == base_op[OP_SUB_IDX])
	expr[i] = '-';
      else if (expr[i] == base_op[OP_MULT_IDX])
	expr[i] = '*';
      else if (expr[i] == base_op[OP_DIV_IDX])
	expr[i] = '/';
      else if (expr[i] == base_op[OP_MOD_IDX])
	expr[i] = '%';
      i++;
    }
}
