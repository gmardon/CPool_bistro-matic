#include <stdio.h>

char	*convert_to_ten(char *, char *);

void	size_to_str(ssize_t);

char	*whole_convert(char *, char **);

int	main(int ac, char **av)
{
  //whole_convert(av[1], av[2], av);
  printf("%s\n", whole_convert(av[1], av));
}
