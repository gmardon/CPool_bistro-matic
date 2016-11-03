/*
** calculate.c for evalexpr in /home/victor/Piscine/CPool_bistro-matic/parsing
** 
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.eu>
** 
** Started on  Wed Nov  2 09:16:30 2016 Victor Le Dantec
** Last update Wed Nov  2 15:23:53 2016 Victor Le Dantec
*/

#include <stdlib.h>

char    *getlastnumber(char **str, size_t *index)
{
  while (str[*index][0] == ' ' || str[*index][0] == '+' || str[*index][0] == '-'
	 || str[*index][0] == '/' || str[*index][0] == '*' || str[*index][0] == '%')
      *index = *index - 1;
  return (str[*index]);
}

char	*calculate_postfix(char **str, char *base)
{
  size_t	*index;
  size_t	indexop;
  char	*op1;
  char	*op2;

  index = malloc(sizeof(int *));
  indexop = 0;
  while (str[indexop] != 0)
    {
      if (my_strstr(str[indexop], "+") != NULL)
	{
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
	  str[indexop] = my_strdup(add(op1, op2));
	}
      indexop++;
    }
  return (str[indexop - 1]);
}
