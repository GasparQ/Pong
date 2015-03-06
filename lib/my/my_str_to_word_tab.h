/*
** my_str_to_word_tab.h for my_str_to_word_tab in /home/gaspar_q/rendu/Piscine_C_J08/include
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Fri Oct 10 09:14:32 2014 quentin gasparotto
** Last update Sun Oct 26 15:16:18 2014 quentin gasparotto
*/

#ifndef MY_STR_TO_WORD_TAB_H_
# define MY_STR_TO_WORD_TAB_H_

# define ALPHA_MAJ(Value) (Value > 64 && Value < 91 ? 1 : 0)
# define ALPHA_MIN(Value) (Value > 96 && Value < 123 ? 1 : 0)
# define NUMERIC(Value) (Value > 47 && Value < 58 ? 1 : 0)
# include <stdlib.h>

char	**my_str_to_wordtab(char *str);

#endif /* !MY_STR_TO_WORD_TAB_H_ */
