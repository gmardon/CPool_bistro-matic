#include <stdio.h>

char	*my_nbrptr(char *, char **);

void	main(int ac, char **av)
{
  av++;
  printf("%s\n", my_nbrptr(*av, av));
  printf("%s\n", *av);
}
