/*
** my_str_isprintable.c for my_str_isprintable in /home/gaspar_q/rendu/Piscine_C_J06/ex_14
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Mon Oct  6 18:06:58 2014 quentin gasparotto
** Last update Thu Oct 16 15:18:02 2014 quentin gasparotto
*/

int	my_str_isprintable(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      if (str[a] >= 32 && str[a] <= 127 && str[a + 1] == '\0')
	{
	  return (1);
	}
      else if (str[a + 1] == '\0')
	{
	  return (0);
	}
      a = a + 1;
    }
  return (1);
}
