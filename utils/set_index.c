/*
** set_index.c for addinf in /home/moana.dumora/Piscine/CPool_infinadd/
**
** Made by Moana Dumora
** Login   <moana.dumora@epitech.eu@epitech.eu>
**
** Started on  Wed Oct 26 16:27:38 2016 Moana Dumora
** Last update Wed Oct 26 17:03:00 2016 Moana Dumora
*/

char	*set_index2(int newindex, char *cpy, char *val1, char *val2)
{
  int	diff;
  int	indexVal1;
  int	indexVal2;

  indexVal1 = my_strlen(val1);
  indexVal2 = my_strlen(val2);
  cpy = malloc(8 * (indexVal2 + 2));
  diff = indexVal2 - indexVal1;
  newindex = indexVal2;
  while (newindex > 0)
    {
      if (newindex > diff)
	cpy[newindex - 1] = val1[indexVal1 - 1];
      else
	cpy[newindex - 1] = '0';
      indexVal1--;
      newindex--;
    }
  cpy[newindex] = '0';
  return (cpy);
}

char	*set_index(char *val1, char *val2)
{
  int	diff;
  int	newindex;
  char	*cpy;
  int	indexVal1;
  int	indexVal2;

  indexVal1 = my_strlen(val1);
  indexVal2 = my_strlen(val2);
  if (indexVal1 > indexVal2)
    {
      cpy = malloc(8 * (indexVal1 + 2));
      diff = indexVal1 - indexVal2;
      newindex = indexVal1;
      while (newindex > 0)
	{
	  cpy[newindex - 1] = (newindex > diff) ? val2[indexVal2 - 1] : '0';
	  indexVal2--;
	  newindex--;
	}
      cpy[newindex] = '0';
    }
  else
    cpy = set_index2(newindex, cpy, val1, val2);
  return (cpy);
}
