/*
** my_putnbr_base.c for my_putnbr_base in /home/gaspar_q/rendu/Piscine_C_J06/ex_15
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Mon Oct  6 18:27:08 2014 quentin gasparotto
** Last update Mon Oct 20 14:29:04 2014 quentin gasparotto
*/

void	display(int num_base, int nbr, char *base)
{
  int	r;

  if (nbr != 0)
    {
      r = nbr % num_base;
      nbr = nbr / num_base;
      display(num_base, nbr, base);
      my_putchar(base[r]);
    }
  else
    {
      my_putchar(base[0]);
    }
}

int	my_putnbr_base(int nbr, char *base)
{
  int	num_base;

  num_base = my_strlen(base);
  if (nbr < 0)
    {
      my_putchar('-');
      display(num_base, (-1) * nbr, base);
    }
  else
    {
      display(num_base, nbr, base);
    }
  return (nbr);
}
