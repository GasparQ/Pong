/*
** my_str_isalpha.c for my_str_isalpha in /home/gaspar_q/rendu/Piscine_C_J06
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Mon Oct  6 17:14:36 2014 quentin gasparotto
** Last update Mon Oct  6 17:36:06 2014 quentin gasparotto
*/

int	my_str_islower(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      if ((str[a] < 97 && str[a] != 32) || str[a] > 122)
	{
	  return (0);
	}
      else if (str[a + 1] == '\0')
	{
	  return (1);
	}
      a = a + 1;
    }
  return (1);
}
