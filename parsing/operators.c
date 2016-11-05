/*
** operators.c for parsing in /home/victor/Piscine/CPool_bistro-matic/parsing
** 
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
** 
** Started on  Fri Nov  4 08:57:36 2016 Victor Le Dantec
** Last update Sat Nov  5 15:19:22 2016 Victor LE DANTEC
*/

#include "operators.h"

void	parsing_calculate(char **str, size_t *index, size_t indexop, char op)
{
  char	*op1;
  char	*op2;

  *index = indexop - 1;
  op1 = malloc(sizeof(char *) * my_strlen(getlastnumber(str, index)) + 1);
  *index = *index - 1;
  op2 = malloc(sizeof(char *) * my_strlen(getlastnumber(str, index)) + 1);
  *index = indexop - 1;
  op1 = getlastnumber(str, index);
  str[*index] = my_strdup(" ");
  *index = *index - 1;
  op2 = getlastnumber(str, index);
  str[*index] = my_strdup(" ");
  if (op == '+')
    str[indexop] = my_strdup(add(op1, op2));
  else if (op == '-')
    str[indexop] = my_strdup(minus(op2, op1));
  else if (op == '*')
    str[indexop] = my_strdup(multiply(op1, op2));
  else if (op == '/')
    str[indexop] = my_strdup(divide(op1, op2));
  else if (op == '%')
    str[indexop] = my_strdup(modulo(op2, op1));
}
