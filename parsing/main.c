#include <stdio.h>

char	*my_opptr(char *, char **);

void	main(int ac, char **av)
{
  av++;
  my_show_wordtab(torpn(av));
}
