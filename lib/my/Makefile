##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## make all my lib
##

SRC1	=	$(shell find .-type f -name'*.c')

SRC2	=	*.h*

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

$(NAME):	$(OBJ)
	gcc -c *.c
	ar rc $(NAME) *.o
	cp -r $(NAME) ../

all: $(NAME)

clean:
	rm -f $(OBJ)
	rm -f *~
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re: fclean all

reset:
	rm -rf ../libmy.a
	rm -rf ../../include
	rm -rf libmy.a
