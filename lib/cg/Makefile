##
## EPITECH PROJECT, 2018
## makefile
## File description:
## it makes files
##

NAME	=	libcg.a

YELLOW	=	\033[1;35m

all:	$(NAME)

$(NAME):
	@echo -e "$(YELLOW)Compiling graphic lib....\033[0;39m"
	gcc -c *.c
	ar rc $(NAME) *.o
	@echo -e "\033[1;92mLib successfully compiled !\033[0;39m"

clean:
	rm -f *.o
	rm -f $(NAME)
	rm -f ../$(NAME)

re: clean all