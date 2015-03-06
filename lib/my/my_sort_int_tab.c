/*
** my_sort_int_tab.c for my_sort_int_tab in /home/gaspar_q/rendu/Piscine_C_J04
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Fri Oct  3 13:37:01 2014 quentin gasparotto
** Last update Sun Oct 26 14:29:32 2014 quentin gasparotto
*/

int	my_swap_int(int *a, int *b)
{
  int	*save;

  save = a;
  a = b;
  b = save;
}

void	my_sort_int_tab(int *tab, int size)
{
  int	size2;

  size2 = size;
  while (size > 0)
    {
      while (size2 > 1)
	{
	  if (tab[size2 - 1] <= tab[size2 - 2])
	    {
	      my_swap_int(tab + size2 - 1, tab + size2 - 2);
	    }
	  size2 = size2 - 1;
	}
      size = size - 1;
    }
}
