/*
** utils.h for bistro-matic in /media/gmardon/1aa9b3b8-3e24-4ea9-9b0d-d57254b2d1b9/guillaume.mardon/delivery/CPool_bistro-matic/utils/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu@epitech.eu>
**
** Started on  Sun Oct 30 15:01:49 2016 Guillaume MARDON
** Last update Wed Nov  2 11:03:52 2016 Guillaume MARDON
*/
char	*str_set_zero(char *str, int size);
char	*equalise_numbers(char *val1, char *val2);
int		is_neg(char *nbr);
char	*substr(char *src, int bindex);
char	*remove_zeros(char *str);
void	*put_with_offset(char *str, int number, int zcount);
int		is_greater(char *val1, char *val2);
char	*set_negative(char *str);
char	*clean_negation(char *str);
