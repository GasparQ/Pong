/*
** my_showstr.c for my_showstr in /home/gaspar_q/rendu/Piscine_C_J06/ex_17
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Thu Oct 16 15:22:19 2014 quentin gasparotto
** Last update Thu Oct 16 15:40:00 2014 quentin gasparotto
*/

int	my_showstr(char *str)
{
  int	rank;
  int	char_unprintable;

  rank = 0;
  while (str[rank] != '\0')
    {
      if (str[rank] < 32 || str[rank] > 127)
	{
	  char_unprintable = str[rank];
	  my_putchar('\\');
	  my_putnbr_base(char_unprintable, "0123456789abcdef");
	}
      else
	{
	  my_putchar(str[rank]);
	}
      rank = rank + 1;
    }
  my_putchar('\n');
  return (0);
}
