##
## Makefile for 101 pong make file in /home/gaspar_q/rendu/101pong
## 
## Made by quentin gasparotto
## Login   <gaspar_q@epitech.net>
## 
## Started on  Tue Nov 11 00:05:52 2014 quentin gasparotto
## Last update Tue Nov 11 00:15:33 2014 quentin gasparotto
##

SRC=	pong.c

OBJ=	$(SRC:.c=.o)

NAME=	101pong

$(NAME):	$(OBJ)
	cc -o $(NAME) $(OBJ) -L ./lib/my -lmy -I ./include -lm

all:	$(NAME)

clean:
	rm $(OBJ)

fclean:	clean
	rm $(NAME)

re:	fclean all
