#include <stdio.h>

char	*my_opptr(char *, char **);

void	main(int ac, char **av)
{
  char **tmp;
  
  tmp = torpn(av);
  my_show_wordtab(tmp);
  printf("result = %s\n", calculate_postfix(tmp, av[2]));
}
