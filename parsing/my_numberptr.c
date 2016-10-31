/*
** my_numberptr.c for bitro in /home/moana/Piscine/CPool_bistro-matic/parsing/
**
** Made by Moana Dumora
** Login   <moana.dumora@epitech.eu@epitech.eu>
**
** Started on  Sun Oct 30 15:01:11 2016 Moana Dumora
** Last update Sun Oct 30 15:01:19 2016 Moana Dumora
*/

#include <stdlib.h>
#include <stdio.h>

int	int_len(char *);

char	*my_nbrptr(char *str, char **endptr)
{
  int	i;
  char	*nbr;
  int	k;
  int	j;
  
  i = k = j = 0;
  nbr = malloc(sizeof(char *) * (int_len(str) + 2));
  while (*str != '\0')
    {
      if (*str >= '0' && *str <= '9')
	{
	  nbr[k] = *str;
	  k++;
	  if (str[1] > '9' || str[1] < '0')
	    {
	      str++;
	      *endptr = str;
	      return (nbr);
	    }
	}
      str++;
    }
}

char    *my_opptr(char *str, char **endptr)
{
  int   i;
  char  *op;
  int   k;
  int   j;

  i = k = j = 0;
  op = malloc(sizeof(char *) * my_strlen(str));
  while (*str != '\0')
    {
      if (*str == '-' || *str == '+' || *str == '*' || *str == '/'
	  || *str == '%'  || *str == '(' || *str == ')' )
	{
	  op[k] = *str;
	  printf("%s\n", op);
	  k++;
	  if (str[1] <= '9' || str[1] >= '0')
	    {
	      str++;
	      *endptr = str;
	      return (op);
	    }
	}
      str++;
    }
}
