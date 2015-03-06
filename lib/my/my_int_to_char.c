/*
** my_int_to_char.c for convert int to char* in /home/gaspar_q/rendu/Bistromathique/lib/my
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Fri Oct 31 14:42:47 2014 quentin gasparotto
** Last update Sun Nov  9 16:24:13 2014 quentin gasparotto
*/

char	*my_int_to_char(int nb)
{
  int   coeff;
  int   rank;
  int   sign;
  char  *num_char;

  coeff = 1;
  rank = 1;
  sign = 1;
  while (nb / coeff > 10 || nb / coeff < -10)
    {
      coeff = coeff * 10;
      rank = rank + 1;
    }
  if (nb < 0)
    sign = 2;
  num_char = malloc(rank + sign);
  rank = 0 + sign - 1;
  if (nb < 0)
    {
      num_char[0] = '-';
      nb = nb * (-1);
    }
  while (coeff > 0)
    {
      num_char[rank] = nb / coeff + 48;
      nb = nb - (nb / coeff) * coeff;
      coeff = coeff / 10;
      rank = rank + 1;
    }
  num_char[rank] = 0;
  return (num_char);
}
