/*
** main.c for bistro-matic in /home/guillaume.mardon/delivery/CPool_bistro-matic/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu>
**
** Started on  Mon Oct 24 10:03:22 2016 Guillaume MARDON
** Last update Wed Oct 26 23:24:16 2016 Moana Dumora
*/
#include "operators.c"

int	main(int argc, char **argv)
{
  if (argc < 3 || argc > 3)
    return (84);
  else
    add_inf(argv[1], argv[2]);
}
