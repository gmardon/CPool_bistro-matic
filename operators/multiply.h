/*
** multiply.h for bistro-matic in /media/gmardon/1aa9b3b8-3e24-4ea9-9b0d-d57254b2d1b9/guillaume.mardon/delivery/CPool_bistro-matic/operators/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu@epitech.eu>
**
** Started on  Sun Oct 30 14:30:45 2016 Guillaume MARDON
** Last update Fri Nov  4 15:31:34 2016 Victor Le Dantec
*/

#include <stdlib.h>

char	*multiply_after_handle_negative(char *val1, char *val2, char *result);
char	*multiply(char *val1, char *val2);
char	*remove_zeros(char *);
void	*put_with_offset(char *, int, int);
char	*add(char *, char *);
char	*str_set_zero(char *, int);
size_t	my_strlen(char *);
char	*set_negative(char *);
int	is_neg(char *);
char	*clean_negation(char *);
