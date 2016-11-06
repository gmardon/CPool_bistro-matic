/*
** parser2.c for evalexpr in /home/victor.le-dantec/Pool/CPool_bistro-matic/parsing
**
** Made by Victor LE DANTEC
** Login   <victor.le-dantec@epitech.eu>
**
** Started on  Sun Nov  6 10:57:39 2016 Victor LE DANTEC
** Last update Sun Nov  6 18:20:02 2016 Victor LE DANTEC
*/

#include <stdlib.h>
#include "parser.h"

void	pushstack(char **, char **, size_t);
void	pushstackop(char **, char *, size_t);
void	popstackop(char **, char *, char **, size_t);
void	mv_pointer_next_char(char *, char **);

size_t	pop_stack_op_index(char **str, char *stackop, char **stack, size_t index)
{
  popstackop(str, stackop, stack, index);
  return (index + 1);
}

size_t	push_stack_index(char **str, char **stack, size_t index)
{
  pushstack(str, stack, index);
  return (index + 1);
}

size_t	check_priority_pro(char **str, char *stackop, char **stack, size_t index)
{
  while (chk_priority(str[1][0]) < chk_priority(stackop[my_strlen(stackop) - 1]))
    {
      if (str[1][0] == '(')
	break;
      index = pop_stack_op_index(str, stackop, stack, index);
    }
  return (index);
}

char	**processing_rpn(char **str, char *stackop, size_t index, size_t indexop)
{
  char	**stack;

  stack = malloc(sizeof(char **) * (my_strlen(str[1]) + 1));
  while (str[1][0] != '\0')
    {
      if (str[1][0] >= '0' && str[1][0] <= '9')
	index = push_stack_index(str, stack, index);
      else if (is_operator(str[1]) == 1)
	{
	  index = check_priority_pro(str, stackop, stack, index);
	  if (chk_priority(str[1][0]) == 5)
	    {
	      while (stackop[my_strlen(stackop) - 1] != '(')
		index = pop_stack_op_index(str, stackop, stack, index);
	      stackop[my_strlen(stackop) - 1] = '\0';
	      mv_pointer_next_char(str[1], str);
	    }
	  else
	    {
	      if (str[1][0] == '-' && stackop[my_strlen(stackop) - 1] == '('
		  && (str[1][1] >= '0' && str[1][1] <= '9'))
		index = push_stack_index(str, stack, index);
	      else if (str[1][0] == '-' && index == 0 && (str[1][1] >= '0' && str[1][1] <= '9'))
		index = push_stack_index(str, stack, index);
	      else
		pushstackop(str, stackop, indexop);
	      indexop++;
	    }
	}
    }
  indexop = 0;
  while (stackop[0] != '\0')
    index = pop_stack_op_index(str, stackop, stack, index);
  return (stack);
}
