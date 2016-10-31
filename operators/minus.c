/*
** minus.c for bistro-matic in /media/gmardon/1aa9b3b8-3e24-4ea9-9b0d-d57254b2d1b9/guillaume.mardon/delivery/CPool_bistro-matic/operators/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu@epitech.eu>
**
** Started on  Sun Oct 30 14:28:34 2016 Guillaume MARDON
** Last update Mon Oct 31 13:35:56 2016 Guillaume MARDON
*/
char	*minus(char *val1, char *val2)
{
  char	*result;
  int	index;
  int	length;
  int	value;
  int	retained;

  if (my_strlen(val1) < my_strlen(val2))
    val1 = equalise_numbers(val1, val2);
  else if (my_strlen(val1) > my_strlen(val2))
    val2 = equalise_numbers(val1, val2);
  length = my_strlen(val1);
  result = malloc(8 * (length + 1));
  index = length - 1;
  retained = 0;
  while (index > -1)
    {
      value = (val1[index] - 48) - ((val2[index] - 48) + retained);
      if (value < 0)
				value = ((val1[index] - 48) + 10) - ((val2[index] - 48) + retained++);
      value = (value >= 10 ? value % 10 : value);
      result[index] = value + 48;
      index--;
    }
  return (remove_zeros(result));
}
