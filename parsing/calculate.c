/*
** calculate.c for evalexpr in /home/victor/Piscine/CPool_bistro-matic/parsing
** 
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.eu>
** 
** Started on  Wed Nov  2 09:16:30 2016 Victor Le Dantec
** Last update Fri Nov  4 09:30:12 2016 Victor Le Dantec
*/

#include <stdlib.h>

char    *getlastnumber(char **str, size_t *index)
{
  while (str[*index][0] == ' ' || str[*index][0] == '+' || str[*index][0] == '-'
	 || str[*index][0] == '/' || str[*index][0] == '*' || str[*index][0] == '%')
      *index = *index - 1;
  return (str[*index]);
}

char	*calculate_postfix(char **str)
{
  size_t	*index;
  size_t	indexop;

  index = malloc(sizeof(size_t *));
  indexop = 0;
  while (str[indexop] != 0)
    {
      if (my_strstr(str[indexop], "+") != NULL)
	parsing_calculate(str, index, indexop, '+');
      if (my_strstr(str[indexop], "-") != NULL)
	parsing_calculate(str, index, indexop, '-');
      if (my_strstr(str[indexop], "*") != NULL)
	parsing_calculate(str, index, indexop, '*');
      if (my_strstr(str[indexop], "/") != NULL)
	parsing_calculate(str, index, indexop, '/');
      if (my_strstr(str[indexop], "%") != NULL)
	parsing_calculate(str, index, indexop, '%');
      indexop++;
    }
  return (str[indexop - 1]);
}
