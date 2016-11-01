/*
** utils.c for bistro-matic in /home/guillaume.mardon/delivery/CPool_bistro-matic/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu>
**
** Started on  Wed Oct 26 07:01:21 2016 Guillaume MARDON
** Last update Tue Nov  1 11:23:42 2016 Guillaume MARDON
*/

char	*remove_zeros(char *str)
{
  while (*str == '0' && *(str + 1) != '\0')
    str++;

  return (str);
}

char	*equalise_numbers(char *val1, char *val2)
{
  int	val1len;
  int	val2len;
  int	biggerlen;
  char	*newarray;
  int	index;

  val1len = my_strlen(val1);
  val2len = my_strlen(val2);
  index = 0;
  if (val1len > val2len)
    {
      newarray = malloc(val1len * sizeof(char*));
      while (index++ < val1len)
	  newarray[index - 1] = ((index - 1) < (val1len - val2len)
		             ? '0' : val2[(index - 1) - (val1len - val2len)]);
    }
  else
    {
      newarray = malloc(val2len * sizeof(char*));
      while (index++ < val2len)
	  newarray[index - 1] = ((index - 1) < (val2len - val1len)
			     ? '0' : val1[(index - 1) - (val2len - val1len)]);
    }
  return (newarray);
}

char	*str_set_zero(char *str, int size)
{
  int	index;

  index = 0;
  while (index < size)
      str[index++] = '0';
}

int	is_neg(char *nbr)
{
  return (remove_zeros(nbr)[0] == '-' ? 1 : 0);
}

char	*substr(char *src, int bindex)
{
  char 	*result;
  int		length;
  int 	index;

  index = 0;
  length = my_strlen(src);
  result = malloc(8 * (length - bindex));
  while (index < length)
    {
      result[index] = src[index + bindex];
      index++;
    }
  return (result);
}

void	*put_with_offset(char *str, int number, int zcount)
{
  int length;
  int index;

  length = my_strlen(str);
  index = 0;
  while (zcount != index)
    {
      str[length - (index++)] = '0';
    }
  if (number >= 10)
    {
      str[length - (index++)] = (number % 10) + 48;
      number /= 10;
    }
  str[length - index] = number + 48;
}

int	is_gretter(char *val1, char *val2)
{
  int 	index;

  index = 0;

  while (val1[index] == val2[index])
    {
      if (val1[index] == '\0' && val2[index] == '\0')
				{
	  			return (0);
				}
      index++;
    }
  if (val1[index] == '-')
    return -1;
  else if (val2[index] == '-')
   	return 1;
  return (val1[index] < val2[index] ? 1 : -1);
}
