/*
** multiply.c for bistro-matic in /media/gmardon/1aa9b3b8-3e24-4ea9-9b0d-d57254b2d1b9/guillaume.mardon/delivery/CPool_bistro-matic/operators/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu@epitech.eu>
**
** Started on  Sun Oct 30 14:32:57 2016 Guillaume MARDON
** Last update Thu Nov  3 18:40:46 2016 Guillaume MARDON
*/
//#include "divide.h"

char	*divide(char *val1, char *val2)
{
  int	val1len;
  int val2len;

  val1len = my_strlen(val1);
  val2len = my_strlen(val2);

  char *diffLen = minus(val1len, val2len);
  if(diffLen < 0)
    return ("0");

  char *temp = malloc(sizeof(char * ) * diffLen)
}
