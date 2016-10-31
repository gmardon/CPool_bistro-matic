/*
** parser.c for bistro in /home/moana/Piscine/CPool_bistro-matic/parsing/
**
** Made by Moana Dumora
** Login   <moana.dumora@epitech.eu@epitech.eu>
**
** Started on  Sun Oct 30 17:11:01 2016 Moana Dumora
** Last update Sun Oct 30 17:11:05 2016 Moana Dumora
*/

char	**torpn(char **str)
{
  int	index;
  int	indexop;
  char	**stack;
  char	*stackop;

  index = 0;
  indexop = 0;
  stack = malloc(sizeof(char **) * (my_strlen(str[1]) + 1));
  stackop = malloc(sizeof(char *) * (my_strlen(str[1]) + 1));
  while (str[1][0] != '\0')
    {
      //printf("str[1] = %s\n", str[1]);
      if (str[1][0] >= '0' && str[1][0] <= '9')
	{
	  //printf("test\n");
	  pushstack(str, stack, index);
	  index++;
	}
      else if (is_operator(str[1]) == 1)
	{
	  while (chk_priority(str[1][0]) < chk_priority(stackop[my_strlen(stackop)]))
	    {
	      //printf("test2\n");
	      popstackop(str, stackop, stack, index);
	      index++;
	    }
	  //printf("test3\n");
	  pushstackop(str, stackop, indexop);
	  indexop++;
	}
    }
  indexop = 0;
  while (stackop[0] != '\0')
    {
      //printf("test\n");
      popstackop(str, stackop, stack, index);
      index++;
    }
  return (stack);
}

void	pushstack(char **str, char **stack, int index)
{
  stack[index] = malloc(sizeof(char *) * (int_len(str[1]) + 2));
  stack[index] = my_nbrptr(str[1], str);
}

void	pushstackop(char **str, char *stackop, int indexop)
{
  stackop = my_strcat(stackop, my_opptr(str[1], str));
}

void	popstackop(char **str, char *stackop, char **stack, int index)
{
  //printf("stackopdébut = %s\n", stackop);
  stack[index] = malloc(sizeof(char *) + 1);
  stack[index][0] = stackop[my_strlen(stackop) - 1];
  stack[index][1] = '\0';
  stackop[my_strlen(stackop) - 1] = '\0';
  //printf("stackopfin = %s\n", stackop);
}
