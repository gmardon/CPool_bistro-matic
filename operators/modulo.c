/*
** modulo.c for bistro in /home/moana/Piscine/CPool_bistro-matic/operators/
**
** Made by Moana Dumora
** Login   <moana.dumora@epitech.eu@epitech.eu>
**
** Started on  Sat Nov  5 09:40:33 2016 Moana Dumora
** Last update Sat Nov  5 18:16:03 2016 Victor LE DANTEC
*/

#include <stdlib.h>

int	my_strcmp(char *, char *);

char	*modulo(char *nbr, char *modulus)
{
  return (minus(nbr, multiply(my_strdup(modulus), divide(nbr, modulus))));
}
