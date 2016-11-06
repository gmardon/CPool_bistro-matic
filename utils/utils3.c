/*
** utils3.c for bistro-matic in /home/victor.le-dantec/Pool/CPool_bistro-matic
** 
** Made by Victor LE DANTEC
** Login   <victor.le-dantec@epitech.eu>
** 
** Started on  Sun Nov  6 10:25:53 2016 Victor LE DANTEC
** Last update Sun Nov  6 10:26:05 2016 Victor LE DANTEC
*/

#include "utils.h"

int     is_neg(char *nbr)
{
  if (*nbr == '\0')
    return (0);
  return (remove_zeros(nbr)[0] == '-' ? 1 : 0);
}
