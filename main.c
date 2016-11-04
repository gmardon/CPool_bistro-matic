/*
** main.c for bistro-matic in /home/guillaume.mardon/delivery/CPool_bistro-matic/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu>
**
** Started on  Mon Oct 24 10:03:22 2016 Guillaume MARDON
** Last update Thu Nov  3 15:10:04 2016 Victor Le Dantec
*/

#include <stdio.h>
#define BUFF_SIZE (4096)

char	*read_stdout()
{
  char  buff[BUFF_SIZE + 1];
  int   total_read;
  ssize_t       len;

  total_read = 0;
  while ((len = read(0, (buff + total_read), BUFF_SIZE)) != 0)
    {
      if ((len + total_read) > BUFF_SIZE)
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

int	main(int argc, char **argv)
{
  char	*buffer;
  char	**postfix;
  char	**temppostfix;

  buffer = read_stdout();
  temppostfix = malloc(sizeof(char **));
  temppostfix[2] = malloc(sizeof(char *) * my_strlen(buffer));
  my_strncpy(temppostfix[2], buffer, my_strlen(buffer) - 1);
  buffer = whole_convert(argv[1], temppostfix);
  temppostfix[1] = malloc(sizeof(char *) * my_strlen(buffer));
  my_strcpy(temppostfix[1], buffer);
  buffer = calculate_postfix(torpn(temppostfix));
  buffer = ten_to_base(buffer, argv[1]);
  printf("%s\n", buffer);
}
