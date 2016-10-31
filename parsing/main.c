#include <stdio.h>

char	*my_opptr(char *, char **);

void	main(int ac, char **av)
{
  av++;
  printf("operator = %s\n", my_opptr(*av, av));
  printf("str = %s\n", *av);
}
