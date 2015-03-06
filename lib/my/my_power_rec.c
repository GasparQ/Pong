/*
** my_power_rec.c for my_power_rec in /home/gaspar_q/rendu/Piscine_C_J05
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Fri Oct  3 13:07:57 2014 quentin gasparotto
** Last update Wed Oct  8 12:08:17 2014 quentin gasparotto
*/

int	my_power_rec(int nb, int power)
{
  if (power > 1)
    {
      return (nb * my_power_rec(nb, power - 1));
    }
  else if (power < 0)
    {
      return (0);
    }
  else
    {
      return (nb);
    }
}
