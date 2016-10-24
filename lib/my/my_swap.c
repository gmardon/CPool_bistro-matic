/*
** my_swap.c for my_swap in /home/victor.le-dantec/CPool_Day04
** 
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
** 
** Started on  Thu Oct  6 10:59:11 2016 Victor Le Dantec
** Last update Thu Oct  6 13:46:33 2016 Victor Le Dantec
*/
int	my_swap(int *a, int *b)
{
  int	c;

  c = *b;
  *b = *a;
  *a = c;
}
