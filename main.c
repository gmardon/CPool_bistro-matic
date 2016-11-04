/*
** main.c for bistro-matic in /home/guillaume.mardon/delivery/CPool_bistro-matic/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu>
**
** Started on  Mon Oct 24 10:03:22 2016 Guillaume MARDON
** Last update Fri Nov  4 15:58:58 2016 Victor Le Dantec
*/

#include "main.h"

char	*read_stdout(size_t buffsize)
{
  char  buff[buffsize + 1];
  int   total_read;
  ssize_t       len;

  total_read = 0;
  while ((len = read(0, (buff + total_read), buffsize)) != 0)
    {
      if ((len + total_read) > buffsize)
	{
	  my_putstr("None");
	  return (84);
	}
      total_read += len;
    }
  if (total_read == 0)
    {
      my_putstr("None");
      return (84);
    }
  buff[total_read] = '\0';
  return (my_strdup(buff));
}

char	*remove_minus(char *buffer)
{
  char	*tmp;
  size_t	i;

  i = 0;
  tmp = malloc(sizeof(char *) * my_strlen(buffer) + 1);  
  while (buffer[++i] != '\0')
    tmp[i - 1] = buffer[i];
  return (tmp);
}

char	*processing(char **argv)
{
  char  *buffer;
  char  *tmp;
  char  **postfix;
  char	**temppostfix;

  buffer = read_stdout(char_to_size(argv[3]) + 1);
  temppostfix = malloc(sizeof(char **));
  temppostfix[2] = malloc(sizeof(char *) * my_strlen(buffer));
  my_strncpy(temppostfix[2], buffer, my_strlen(buffer) - 1);
  buffer = whole_convert(argv[1], temppostfix);
  temppostfix[1] = malloc(sizeof(char *) * my_strlen(buffer));
  my_strcpy(temppostfix[1], buffer);
  buffer = calculate_postfix(torpn(temppostfix));
  if (buffer[0] == '-')
    {
      buffer = ten_to_base(remove_minus(buffer), argv[1]);
      tmp = malloc(sizeof(char *) * my_strlen(buffer) + 1);
      tmp[0] = '-';
      tmp[1] = '\0';
      buffer = my_strcat(tmp, buffer);
    }
  else
    buffer = ten_to_base(buffer, argv[1]);
  return (buffer);
}

void	display_help()
{
  my_putstr("USAGE\n");
  my_putstr("           ./calc base operators size_read\n");
  my_putchar('\n');
  my_putstr("DESCRIPTION\n");
  my_putstr("           base       all the symbols of the base\n");
  my_putstr("           operators  the symbols for the parentheses and the 5 operators\n");
  my_putstr("           size_read  numbers of characters to be read\n");
}

int	main(int argc, char **argv)
{
  if (argv[1][0] == '-' && argv[1][1] == 'h' && argv[1][2] == '\0')
    {
      display_help();
      return (0);
    }
  my_putstr(processing(argv));
  my_putchar('\n');
}
