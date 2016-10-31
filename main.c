/*
** main.c for bistro-matic in /home/guillaume.mardon/delivery/CPool_bistro-matic/
**
** Made by Guillaume MARDON
** Login   <guillaume.mardon@epitech.eu>
**
** Started on  Mon Oct 24 10:03:22 2016 Guillaume MARDON
** Last update Sun Oct 30 23:52:26 2016 Guillaume MARDON
*/
#include "stdio.h"
#include "./operators/add.h"

int	main(int argc, char **argv)
{
  if (argc < 3 || argc > 3)
    return (84);
  else
    printf("%s * %s = %s", argv[1], argv[2], multiply(argv[1], argv[2]));
/*
  char base_digits[16] =
	 {'0', '1', '2', '3', '4', '5', '6', '7',
	  '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

   int converted_number[64];
   long int number_to_convert;
   int next_digit, base, index=0;

   /* get the number and base
   printf("Enter number and desired base: ");
   scanf("%ld %i", &number_to_convert, &base);

   /* convert to the indicated base
   while (number_to_convert != 0)
   {
	 converted_number[index] = number_to_convert % base;
	 number_to_convert = number_to_convert / base;
	 ++index;
   }

   /* now print the result in reverse order
   --index;  /* back up to last entry in the array
   printf("\n\nConverted Number = ");
   for(  ; index>=0; index--) /* go backward through array
   {
	 printf("%c", base_digits[converted_number[index]]);
   }
   printf("\n");*/
}
