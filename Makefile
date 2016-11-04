##
## Makefile for BistroMakeTicFile in /home/victor.le-dantec/CPool_bistro-matic
##
## Made by Victor Le Dantec
## Login   <victor.le-dantec@epitech.net>
##
## Started on  Mon Oct 24 10:23:27 2016 Victor Le Dantec
## Last update Fri Nov  4 17:36:19 2016 Victor Le Dantec
##
NAME		=	calc

SRC		=	main.c			\
			help.c			\
			operators/add.c 	\
			operators/multiply.c	\
			operators/minus.c	\
			operators/divide.c	\
			utils/utils.c		\
			base/base.c		\
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
	gcc -g $(SRC) -o $(NAME) -L./lib -lmy $(DEPS)
	@echo "-------------------Done Making-------------------------"

clean:
	@echo "-------------------Cleaning Temp Files-----------------"
	@find ./ \( -name "*~" -o -name "#*#" \) -exec echo "Cleaned {}" \; -exec rm -f -r "{}" \;
	@cd lib/my/ && make clean

fclean:	clean
	@find ./ -name "calc" -exec echo "Cleaned {}" \; -exec rm -f -r "{}" \;
	@cd lib/my/ && make fclean

re:	fclean all
