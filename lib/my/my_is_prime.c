/*
** my_is_prime.c for my_is_prime in /home/gaspar_q/rendu/Piscine_C_J05
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Sun Oct 19 18:18:26 2014 quentin gasparotto
** Last update Sun Oct 26 14:22:49 2014 quentin gasparotto
*/

int	test_prime(int nb, int prime_div)
{
  int	temoin;

  temoin = 0;
  if (prime_div <= calc_square_root(nb, 0))
    {
      if (nb % prime_div == 0 || temoin == 1)
	return (0);
      else
	temoin = test_prime(nb, prime_div + 1);
    }
  else
    return (1);
}

int	calc_square_root(int nb, int root)
{
  if (root * root < nb)
    root = calc_square_root(nb, root + 1);
  else if (root * root > nb)
    return (root - 1);
  else
    return (root);
}

int	my_is_prime(int nb)
{
  int	nb_root;

  if (nb > 1)
    return (test_prime(nb, 2));
  else
    return (0);
}
