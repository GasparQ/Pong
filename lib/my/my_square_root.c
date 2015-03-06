/*
** my_square_root.c for my_square_root in /home/gaspar_q/rendu/Piscine_C_J05
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Mon Oct  6 21:36:01 2014 quentin gasparotto
** Last update Sun Oct 26 14:30:01 2014 quentin gasparotto
*/

int	search(int nb, int root)
{
  if (root * root != nb && root < nb)
    {
      root = search(nb, root + 1);
    }
  else if (root >= nb && nb != 1 && nb != 0)
    {
      return (0);
    }
  else if (nb < 2)
    {
      return (nb);
    }
  return (root); 
}

int	my_square_root(int nb)
{
  int	root;

  if (nb > 0)
    {
      root = search(nb, 0);
      return (root);
    }
  else
    {
      my_putstr("Un négatif n'a pas de racine carré\n");
      return (nb);
    }
}
