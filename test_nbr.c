/*
** test_nbr.c for bistro in /home/moana.dumora/Piscine/CPool_bistro-matic/
**
** Made by Moana Dumora
** Login   <moana.dumora@epitech.eu@epitech.eu>
**
** Started on  Tue Oct 25 15:28:03 2016 Moana Dumora
** Last update Tue Oct 25 15:28:34 2016 Moana Dumora
*/

int	test_nbr(char *val1, char *val2)
{
  int	indexVal1;
  int	indexVal2;
  int	index;

  indexVal1 = my_strlen(val1);
  indexVal2 = my_strlen(val2);
  if (indexVal1 > indexVal2)
    return (1);
  else if (indexVal1 < indexVal2)
    return (2);
  else
    {
      while (indexVal2 > 0)
	{
	  if (val1[indexVal2] > val2[indexVal2])
	    return (1);
	  else if (val2[indexVal2] > val1[indexVal2])
	    return (2);
	  indexVal2--;
	}
    }
  return (0);
}
