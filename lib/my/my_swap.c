/*
** my_swap.c for my_swap in /home/gaspar_q/rendu/Piscine_C_J04
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Thu Oct  2 09:32:20 2014 quentin gasparotto
** Last update Sat Oct  4 16:08:08 2014 quentin gasparotto
*/

int	my_swap(int *a, int *b)
{
  int	*save;

  save = a;
  a = b;
  b = save;
}
