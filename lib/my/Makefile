
##
## Makefile for Makefile in /home/gaspar_q/rendu/J11
## 
## Made by quentin gasparotto
## Login   <gaspar_q@epitech.net>
## 
## Started on  Mon Oct 20 10:48:55 2014 quentin gasparotto
## Last update Fri Oct 24 21:31:14 2014 quentin gasparotto
##

SRC 	= my_find_prime_sup.c \
	  my_getnbr.c \
          my_isneg.c \
	  my_is_prime.c \
	  my_power_rec.c \
	  my_putchar.c \
	  my_putnbr_base.c \
	  my_put_nbr.c \
	  my_putstr.c \
	  my_revstr.c \
	  my_showmem.c \
	  my_showstr.c \
	  my_strdup.c \
	  my_strlcat.c \
	  my_strncat.c \
	  my_sort_int_tab.c \
	  my_square_root.c \
	  my_strcapitalize.c \
	  my_str_isalpha.c \
	  my_str_islower.c \
	  my_str_isnum.c \
	  my_str_isprintable.c \
	  my_str_isupper.c \
	  my_strcat.c \
	  my_strcmp.c \
	  my_strcpy.c \
	  my_strstr.c \
	  my_str_to_wordtab.c \
	  my_strupcase.c \
	  my_swap.c \
	  my_strncmp.c \
	  my_strncpy.c \
	  my_strlen.c \
	  my_strlowcase.c \

OBJ	= $(SRC:.c=.o)

all:	lib

lib:	$(OBJ)
	ar rc libmy.a $(OBJ)
	ranlib libmy.a
	cp "my.h" ../../include

clean:
	rm $(OBJ)
