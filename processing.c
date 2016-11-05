/*
** processing.c for bistro-matic in /home/victor.le-dantec/Pool/CPool_bistro-matic
** 
** Made by Victor LE DANTEC
** Login   <victor.le-dantec@epitech.eu>
** 
** Started on  Sat Nov  5 11:06:10 2016 Victor LE DANTEC
** Last update Sat Nov  5 11:18:13 2016 Victor LE DANTEC
*/

#include "main.h"
#include "base/error.h"

int	all_check(char *, char *, char *);

char    *read_stdout(size_t buffsize)
{
  char          buff[buffsize + 1];
  int           total_read;
  ssize_t       len;

  total_read = 0;
  while ((len = read(0, (buff + total_read), buffsize)) != 0)
    {
      if ((len + total_read) > buffsize)
        {
          write(2, ERROR_MSG, my_strlen(ERROR_MSG));
          return (84);
        }
      total_read += len;
    }
  if (total_read == 0)
    {
      write(2, ERROR_MSG, my_strlen(ERROR_MSG));
      return (84);
    }
  buff[total_read] = '\0';
  return (my_strdup(buff));
}

char    *remove_minus(char *buffer)
{
  char          *tmp;
  size_t        i;

  i = 0;
  tmp = malloc(sizeof(char *) * my_strlen(buffer) + 1);
  while (buffer[++i] != '\0')
    tmp[i - 1] = buffer[i];
  return (tmp);
}

char    *negative_or_not(char **argv, char *buffer, char *tmp)
{
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

char    *processing(char **argv)
{
  char  *buffer;
  char  *tmp;
  char  **postfix;
  char  **temppostfix;

  buffer = read_stdout(char_to_size(argv[3]) + 1);
  base_op_convert(buffer, argv[2]);
  temppostfix = malloc(sizeof(char **));
  temppostfix[2] = malloc(sizeof(char *) * my_strlen(buffer));
  my_strncpy(temppostfix[2], buffer, my_strlen(buffer) - 1);
  if (all_check(temppostfix[2], argv[1], argv[2]) == 0)
    {
      buffer = whole_convert(argv[1], temppostfix);
      temppostfix[1] = malloc(sizeof(char *) * my_strlen(buffer));
      my_strcpy(temppostfix[1], buffer);
      buffer = calculate_postfix(torpn(temppostfix));
      return (negative_or_not(argv, buffer, tmp));
    }
  else
    return (SYNTAX_ERROR_MSG);
}
