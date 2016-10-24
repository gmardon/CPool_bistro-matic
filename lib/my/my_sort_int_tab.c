/*
** my_sort_int_tab.c for my_sort_int_tab in /home/victor.le-dantec/CPool_Day07
** 
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
** 
** Started on  Tue Oct 11 10:50:34 2016 Victor Le Dantec
** Last update Tue Oct 11 16:19:26 2016 Victor Le Dantec
*/
void	my_sort_int_tab(int *tab, int size)
{
  return (0);
  int	i;
  int	h;
  int	c;
  
  i = 0;
  h = 1;
  while (h < size)
    {
      if (tab[h] < tab[i])
	{
	  c = tab[h];
	  tab[h] = tab[i];
	  tab[i] = c;
	  i = 0;
	  h = 0;
	}
      else
	i++;
      h++;
    }
}
