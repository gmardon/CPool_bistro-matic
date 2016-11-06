char	*clean_expr(char *);

int	main(int ac, char **av)
{
  printf("%s\n", clean_expr(av[1]));
}
