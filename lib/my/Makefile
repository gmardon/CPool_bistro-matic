##
## Makefile for Makefile_libmy in /home/victor.le-dantec/CPool_Day10/lib/my
## 
## Made by Victor Le Dantec
## Login   <victor.le-dantec@epitech.net>
## 
## Started on  Fri Oct 14 13:53:29 2016 Victor Le Dantec
## Last update Mon Oct 24 12:26:14 2016 Victor Le Dantec
##
NAME	=	libmy.a

SRC	=	my_putchar.c		\
		my_strlen.c		\
		my_is_prime.c		\
		my_find_prime_sup.c	\
		my_getnbr.c		\
		my_isneg.c		\
		my_power_rec.c		\
		my_put_nbr.c		\
		my_putstr.c		\
		my_revstr.c		\
		my_showmem.c		\
		my_showstr.c		\
		my_sort_int_tab.c	\
		my_square_root.c	\
		my_strcapitalize.c	\
		my_strcat.c		\
		my_strcmp.c		\
		my_strcpy.c		\
		my_str_isalpha.c	\
		my_str_islower.c	\
		my_str_isnum.c		\
		my_str_isprintable.c	\
		my_str_isupper.c	\
		my_strlowcase.c		\
		my_strncat.c		\
		my_strncmp.c		\
		my_strncpy.c		\
		my_strstr.c		\
		my_strupcase.c		\
		my_swap.c		\
		my_putstrerr.c		\
		my_strdup.c

OBJ	=	$(SRC:.c=.o)

RM	=	rm -f

all:	$(NAME)

$(NAME):
	@gcc -w -c $(SRC) && echo "Compiling .o .."
	@ar rc $(NAME) $(OBJ) && echo "Compiling libmy.a .."
	@mv libmy.a ../ && echo "Moving library to ./lib .."

clean:
	@find ./ \( -name "*.o" -o -name "#*#" \) -exec echo "Cleaned {}" \; -exec rm -f -r "{}" \;

fclean:	clean
	@$(RM) ../$(NAME)
	@echo "Cleaned libmy.a .."

re:	fclean all
