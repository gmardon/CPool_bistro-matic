##
## Makefile for BistroMakeTicFile in /home/victor.le-dantec/CPool_bistro-matic
##
## Made by Victor Le Dantec
## Login   <victor.le-dantec@epitech.net>
##
## Started on  Mon Oct 24 10:23:27 2016 Victor Le Dantec
## Last update Sun Oct 30 18:33:43 2016 Guillaume MARDON
##
NAME		=	calc

SRC		=	main.c ./operators/add.c ./operators/multiply.c ./operators/minus.c ./utils/utils.c

RM		=	rm -f

all:	$(NAME)

$(NAME):
	@echo "-------------------Making Library----------------------"
	@cd lib/my/ && make
	@echo "-------------------Done Making Library-----------------"
	@echo "Making Bistro-Matic .."
	@gcc -g -w $(SRC) -o $(NAME) -L./lib -lmy $(DEPS)
	@echo "-------------------Done Making-------------------------"

clean:
	@echo "-------------------Cleaning Temp Files-----------------"
	@find ./ \( -name "*~" -o -name "#*#" \) -exec echo "Cleaned {}" \; -exec rm -f -r "{}" \;
	@cd lib/my/ && make clean

fclean:	clean
	@find ./ -name "calc" -exec echo "Cleaned {}" \; -exec rm -f -r "{}" \;
	@cd lib/my/ && make fclean

re:	fclean all
