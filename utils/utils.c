/*
** utils.c for bistro-matic in /home/guillaume.mardon/delivery/CPool_bistro-matic/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu>
**
** Started on  Wed Oct 26 07:01:21 2016 Guillaume MARDON
** Last update Fri Oct 28 14:20:23 2016 John Doe
*/
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
	  newarray[index] = ((index - 1) < (val2len - val1len)
			     ? '0' : val1[(index - 1) - (val2len - val1len)]);
    }
  return newarray;
}

char	*str_set_zero(char *str, int size)
{
  int	index;

  index = 0;
  while (index < size)
      str[index++] = '0';
}

char	*int_to_string(int nb)
{
  int	strsize;
  char 	*str;
  int	nb2;
  int	index;
  int 	written;

  nb2 = nb;
  strsize = 0;
  while (nb2 != 0) //(nb2 /= 10) % 10 == 0)
    {
      nb2 /= 10;
      strsize++;
    }
  str = malloc(8 * (strsize) + 1);
  index = 0;
  if (nb < 0)
    {
      nb *= (-1);
      str[index++] = '-';
    }
  written = 0;
  while (nb >= 10)
    {
      str[index] = ((nb / my_power_rec(10, strsize - (index + 1)) + 48));
      index++;
      nb -= (nb / my_power_rec(10, strsize - (index))
	     * my_power_rec(10, strsize - (index)));
      written++;
    }

  if (nb >= 0 && nb <= 9)
    {
      written++;
      str[index++] = (48 + nb % 10);
    }
  while (written++ < strsize)
      str[index++] = '0';

  str[index] = '\0';
  return (str);
}

int	nbr_is_neg(char *nbr)
{
  return (nbr[0] == '-' ? 1 : 0);
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
  return result;
}
