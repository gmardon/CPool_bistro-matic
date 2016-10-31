#include <stdio.h>

char	*my_opptr(char *, char **);

void	main(int ac, char **av)
{
  av++;
  printf("%s\n", my_opptr(*av, av));
  printf("%s\n", *av);
}
