/*
** my_getnbr.c for my_getnbr in /home/gaspar_q/rendu/Piscine_C_J04
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Thu Oct  2 19:51:50 2014 quentin gasparotto
** Last update Tue Oct 28 17:23:24 2014 quentin gasparotto
*/

int	my_getnbr(char *str)
{
  int	len;
  int	nbr;
  int	coeff;
  char	c;

  len = my_strlen(str);
  coeff = 1;
  nbr = 0;
  while (len != 0)
    {
      len = len - 1;
      str = str + len;
      c = *str;
      if (c >= 48 && c <= 57)
	{
	  nbr = nbr + coeff * ((int) c - 48);
	  coeff = coeff * 10;
	}
      else if (c == '-' || c == '+')
	nbr = nbr * ((int) c * (-1) + 44) * 1;
      if (coeff > 1000000000)
	return (0);
      str = str - len;
    }
  return (nbr);
}
