##
## Makefile for BistroMakeTicFile in /home/victor.le-dantec/CPool_bistro-matic
##
## Made by Victor Le Dantec
## Login   <victor.le-dantec@epitech.net>
##
## Started on  Mon Oct 24 10:23:27 2016 Victor Le Dantec
## Last update Sat Nov  5 11:56:10 2016 Victor LE DANTEC
##

NAME		=	calc

SRC		=	main.c			\
			processing.c		\
			help.c			\
			operators/add.c 	\
			operators/multiply.c	\
			operators/minus.c	\
			operators/divide.c	\
			operators/modulo.c	\
			utils/utils.c		\
			base/base.c		\
			base/utils.c		\
			base/ten_to_base.c	\
			base/convert_op.c	\
			base/all_errors.c	\
			parsing/calculate.c	\
			parsing/int_len.c	\
			parsing/my_numberptr.c	\
			parsing/parser.c	\
			parsing/utils.c		\
			parsing/operators.c

RM		=	rm -f

all:	$(NAME)

$(NAME):
	@echo "-------------------Making Library----------------------"
	@cd lib/my/ && make
	@echo "-------------------Done Making Library-----------------"
	@echo "Making Bistro-Matic .."
	gcc $(SRC) -o $(NAME) -L./lib -lmy
	@echo "-------------------Done Making-------------------------"

clean:
	@echo "-------------------Cleaning Temp Files-----------------"
	find ./ \( -name "*~" -o -name "#*#" \) -exec $(RM) "{}" \;
	@cd lib/my/ && make clean

fclean:	clean
	$(RM) $(NAME)
	@cd lib/my/ && make fclean

re:	fclean all
