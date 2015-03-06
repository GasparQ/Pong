/*
** my_find_prime_sup.c for my_find_prime_sup in /home/gaspar_q/rendu/Piscine_C_J05
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Sun Oct 19 19:26:28 2014 quentin gasparotto
** Last update Tue Oct 28 11:26:35 2014 quentin gasparotto
*/

int	my_find_prime_sup(int nb)
{
  if (my_is_prime(nb) == 0)
    return (my_find_prime_sup(nb + 1));
  else
    return (nb);
}
