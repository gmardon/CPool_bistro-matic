/*
** main.c for bistro-matic in /home/guillaume.mardon/delivery/CPool_bistro-matic/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu>
**
** Started on  Mon Oct 24 10:03:22 2016 Guillaume MARDON
** Last update Fri Oct 28 12:01:39 2016 John Doe
*/
#include "operators.c"
#include "stdio.h"

int	main(int argc, char **argv)
{
  if (argc < 3 || argc > 3)
    return (84);
  else
    printf("%s * %s = %s", argv[1], argv[2], multiply_inf(argv[1], argv[2]));
}
