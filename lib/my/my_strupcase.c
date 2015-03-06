/*
** my_strupcase.c for my_strupcase in /home/gaspar_q/rendu/Piscine_C_J06
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Mon Oct  6 14:59:21 2014 quentin gasparotto
** Last update Mon Oct  6 16:09:29 2014 quentin gasparotto
*/

char	*my_strupcase(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      if (str[a] >= 97 && str[a] <= 122)
	{
	  str[a] = str[a] - 32;
	}
      a = a + 1;
    }
  return (str);
}
