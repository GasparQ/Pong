/*
** my_str_isalpha.c for my_str_isalpha in /home/gaspar_q/rendu/Piscine_C_J06
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Mon Oct  6 17:14:36 2014 quentin gasparotto
** Last update Tue Oct  7 15:48:11 2014 quentin gasparotto
*/

int	my_str_isalpha(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      if ((str[a] > 64 && str[a] < 122) || str[a] == 32)
	{
	  if (str[a] < 97 && str[a] > 90)
	    {
	      return (0);
	    }
	  else
	    {
	      a = a + 1;
	    }
	}
      else
	{
	  return (0);
	}
    }
  return (1);
}
