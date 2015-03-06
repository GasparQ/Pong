/*
** my_isneg.c for my_isneg in /home/gaspar_q/rendu/Piscine_C_J03
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Wed Oct  1 11:19:20 2014 quentin gasparotto
** Last update Sun Oct 26 14:21:44 2014 quentin gasparotto
*/

int	my_isneg(int n)
{
  if (n < 0)
    {
      my_putchar('N');
    }
  else
    {
      my_putchar('P');
    }
  return (0);
}
