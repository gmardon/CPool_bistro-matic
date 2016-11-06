/*
** parser.c for bistro in /home/moana/Piscine/CPool_bistro-matic/parsing/
**
** Made by Moana Dumora
** Login   <moana.dumora@epitech.eu@epitech.eu>
**
** Started on  Sun Oct 30 17:11:01 2016 Moana Dumora
** Last update Sun Nov  6 11:15:04 2016 Victor LE DANTEC
*/

#include <stdlib.h>
#include "parser.h"

void    pushstack(char **str, char **stack, int index)
{
  stack[index] = malloc(sizeof(char *) * (int_len(str[1]) + 2));
  stack[index] = my_nbrptr(str[1], str);
}

void    pushstackop(char **str, char *stackop, int indexop)
{
  stackop = my_strcat(stackop, my_opptr(str[1], str));
}

void    popstackop(char **str, char *stackop, char **stack, int index)
{
  stack[index] = malloc(sizeof(char *) + 1);
  stack[index][0] = stackop[my_strlen(stackop) - 1];
  stack[index][1] = '\0';
  stackop[my_strlen(stackop) - 1] = '\0';
}

void    mv_pointer_next_char(char *str, char **endptr)
{
  str++;
  endptr[1] = str;
}

char	**torpn(char **str)
{
  size_t	index;
  size_t	indexop;
  char		*stackop;

  index = 0;
  indexop = 0;
  stackop = malloc(sizeof(char *) * (my_strlen(str[1]) + 1));
  return (processing_rpn(str, stackop, index, indexop));
}
