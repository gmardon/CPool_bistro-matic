/*
** utils.c for evalexpr in /home/victor/Piscine/CPool_bistro-matic/parsing/
**
** Made by Victor LE DANTEC
** Login   <victor.le-dantec@epitech.eu>
**
** Started on  Mon Oct 31 16:22:30 2016 Victor LE DANTEC
** Last update Mon Oct 31 16:22:39 2016 Victor LE DANTEC
*/

int	is_operator(char *str)
{
  if (str[0] == '+')
    return (1);
  else if (str[0] == '-')
    return (1);
  else if (str[0] == '*')
    return (1);
  else if (str[0] == '/')
    return (1);
  else if (str[0] == '%')
    return (1);
  else if (str[0] == '(')
    return (1);
  else if (str[0] == ')')
    return (1);
  return (0);
}

int	chk_priority(char c)
{
  if (c == '+')
    return (1);
  else if (c == '-')
    return (1);
  else if (c == '*')
    return (4);
  else if (c == '/')
    return (4);
  else if (c == '%')
    return (4);
  else if (c == '(')
    return (1);
  else if (c == ')')
    return (5);
  else if (c == '\0')
    return (1);
  return (0);
}
