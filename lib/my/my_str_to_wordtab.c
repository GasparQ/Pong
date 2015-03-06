/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/gaspar_q/rendu/Piscine_C_J08/ex_04
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Thu Oct  9 14:15:55 2014 quentin gasparotto
** Last update Sun Oct 26 15:15:14 2014 quentin gasparotto
*/

#include "my_str_to_word_tab.h"

int	calcul_word(char *str, int a, int nb_word)
{
  if (ALPHA_MAJ(str[a - 1]) == 1 || ALPHA_MIN(str[a - 1]) == 1)
    {
      if (ALPHA_MAJ(str[a]) == 0 && ALPHA_MIN(str[a]) == 0)
	{
	  if (NUMERIC(str[a]) == 0)
	    {
	      nb_word = nb_word + 1;
	    }
	}
    }
  if (NUMERIC(str[a - 1]) == 1)
    {
      if (ALPHA_MAJ(str[a]) == 0 && ALPHA_MIN(str[a]) == 0)
	{
	  if (NUMERIC(str[a]) == 0)
	    {
	      nb_word = nb_word + 1;
	    }
	}
    }
  return (nb_word);
}

int	len_word(char *str, int	a, int len)
{
  while (ALPHA_MAJ(str[a]) == 1 ||
	 ALPHA_MIN(str[a]) == 1 ||
	 NUMERIC(str[a]) == 1)
    {
      if (ALPHA_MAJ(str[a]) == 1 || ALPHA_MIN(str[a]) == 1)
	len = len + 1;
      else if (NUMERIC(str[a]) == 1)
	len = len + 1;
      a = a + 1;
    }
  return (len);
}

char	**src_to_dest(char *str, char **final_string, int cmpt)
{
  int	a;
  int	b;
  int	len;

  a = 0;
  while (str[a] != '\0')
    {
      len = len_word(str, a, 0);
      if (len != 0)
	{
	  final_string[cmpt] = malloc(len + 1);
	  b = 0;
	  while (b != len)
	    {
	      final_string[cmpt][b] = str[a + b];
	      b = b + 1;
	    }
	  final_string[cmpt][b] = '\0';
	  cmpt = cmpt + 1;
	  a = a + len - 1;
	}
      a = a + 1;
    }
  return (final_string);
}

char	**my_str_to_wordtab(char *str)
{
  int	a;
  int	nb_word;
  int	len;
  int	cmpt;
  char	**string_of_string;

  nb_word = 0;
  a = 0;
  while (str[a] != '\0')
    {
      nb_word = calcul_word(str, a, nb_word);
      a = a + 1;
    }
  nb_word = calcul_word(str, a, nb_word) + 1;
  string_of_string = malloc(sizeof(char *) * nb_word);
  string_of_string = src_to_dest(str, string_of_string, 0);
  string_of_string[nb_word - 1] = 0;
  return (string_of_string);
}

int	main(int argc, char **argv)
{
  char	**my_wordtab;
  int	a;

  my_wordtab = my_str_to_wordtab(argv[1]);
  while (my_wordtab[a] != 0)
    {
      my_putstr(my_wordtab[a]);
      my_putchar('\n');
      a = a + 1;
    }
  return (0);
}
