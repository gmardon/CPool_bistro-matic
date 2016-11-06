#include <stdio.h>

char	*convert_to_ten(char *, char *);

void	size_to_str(ssize_t);

char	*whole_convert(char *, char **);

ssize_t	char_to_size(char *);

char	*ten_to_base(char *, char*);

void	base_op_convert(char *, char *);

int	main(int ac, char **av)
{
  printf("%s\n", convert_to_ten(av[1], av[2]));
}
