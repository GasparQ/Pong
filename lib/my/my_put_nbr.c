/*
** my_put_nbr.c for my_put_nbr in /home/gaspar_q/rendu/Piscine_C_J03
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Wed Oct  1 14:02:17 2014 quentin gasparotto
** Last update Sat Oct  4 09:01:10 2014 quentin gasparotto
*/

int	my_put_nbr(int nb)
{
  int	c;
  int	nb_bis;
  char	chiffre;

  c = 1;
  nb_bis = nb;
  while (nb_bis >= 10 || nb_bis <= -10)
    {
      c = c * 10;
      nb_bis = nb_bis / 10;
    }
  if (nb < 0)
    {
      my_putchar('-');
      nb = (-1) * nb;
    }
  nb_bis = nb;
  while (c != 0)
    {
      nb_bis = nb / c;
      chiffre = nb_bis + 48;
      my_putchar(chiffre);
      nb = nb - (nb_bis * c);
      c = c / 10;
    }
}
