/*
** parser.c for bistro in /home/moana/Piscine/CPool_bistro-matic/parsing/
**
** Made by Moana Dumora
** Login   <moana.dumora@epitech.eu@epitech.eu>
**
** Started on  Sun Oct 30 17:11:01 2016 Moana Dumora
** Last update Sun Oct 30 17:11:05 2016 Moana Dumora
*/

char	**torpn(char *str)
{
  int	index;
  char	**stack;
  char	*stackop;

  index = 0;
  stack = malloc(sizeof(char **) * (my_strlen(str) + 1));
  //  while (str[index] != '\0')
  //  {
  pushstack(str, stack, index);
  pushstackop(str, stack, index);
  pushstack(str, stack, index);
      //  }
  return (stack);
}

void	pushstack(char **str, char **stack, int index)
{
  stack[index] = malloc(sizeof(char *) * (int_len(str) + 2));
  stack[index] = my_nbrptr(*str, str);
}

void	pushstackop(char **str, char *stackop, int index)
{
  stackop[index] = my_opptr(*str, str);
}

void	popstackop(char **str, char *stackop, char **stack, int index)
{
  int	sizeop;

  stack[index] = malloc(sizeof(char *) + 1);
  sizeop = my_strlen(stackop);
  stack[index] = stackop[sizeop];
}
