/*
** main.c for bistro-matic in /home/guillaume.mardon/delivery/CPool_bistro-matic/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu>
**
** Started on  Mon Oct 24 10:03:22 2016 Guillaume MARDON
** Last update Sat Nov  5 11:18:23 2016 Victor LE DANTEC
*/

#include "main.h"
#include "base/error.h"

int	main(int argc, char **argv)
{
  if (argv[1][0] == '-' && argv[1][1] == 'h' && argv[1][2] == '\0'
      && argc == 2)
    {
      display_help();
      return (0);
    }
  if (argc != 4 || my_strlen(argv[2]) != 7)
    {
      write(2, ERROR_MSG, my_strlen(ERROR_MSG));
      return (84);
    }
  my_putstr(processing(argv));
}
