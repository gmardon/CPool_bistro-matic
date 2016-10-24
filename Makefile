##
## Makefile for BistroMakeTicFile in /home/victor.le-dantec/CPool_bistro-matic
##
## Made by Victor Le Dantec
## Login   <victor.le-dantec@epitech.net>
##
## Started on  Mon Oct 24 10:23:27 2016 Victor Le Dantec
## Last update Mon Oct 24 13:59:41 2016 Moana Dumora
##
NAME		=	calc

SRC		=	main.c

RM		=	rm -f

MAKEFLAGS	+=	--no-print-directory

all:	$(NAME)

$(NAME):
	@echo "-------------------Making Library----------------------"
	@cd lib/my/ && make
	@echo "-------------------Done Making Library-----------------"
	@echo "Making Bistro-Matic .."
	@gcc -w main.c -o $(NAME) -L./lib -lmy
	@echo "-------------------Done Making-------------------------"

clean:
	@echo "-------------------Cleaning Temp Files-----------------"
	@find ./ \( -name "*~" -o -name "#*#" \) -exec echo "Cleaned {}" \; -exec rm -f -r "{}" \;
	@cd lib/my/ && make clean

fclean:	clean
	@find ./ -name "calc" -exec echo "Cleaned {}" \; -exec rm -f -r "{}" \;
	@cd lib/my/ && make fclean

re:	fclean all
