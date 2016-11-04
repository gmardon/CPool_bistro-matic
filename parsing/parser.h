/*
** parser.h for parsing in /home/victor/Piscine/CPool_bistro-matic/parsing
** 
** Made by Victor Le Dantec
** Login   <victor.le-dantec@epitech.net>
** 
** Started on  Fri Nov  4 15:52:12 2016 Victor Le Dantec
** Last update Fri Nov  4 15:52:17 2016 Victor Le Dantec
*/

#include <stdlib.h>

int     is_operator(char *);
int     chk_priority(char);
size_t  my_strlen(char *);
char    *my_opptr(char *, char **);
char    *my_nbrptr(char *, char **);
char    *my_strcat(char *, char *);
int     int_len(char *);
