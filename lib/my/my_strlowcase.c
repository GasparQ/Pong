/*
** my_strlowcase.c for my_strlowcase in /home/gaspar_q/rendu/Piscine_C_J06
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Mon Oct  6 16:03:36 2014 quentin gasparotto
** Last update Mon Oct  6 17:52:21 2014 quentin gasparotto
*/

char	*my_strlowcase(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      if (str[a] >= 65 && str[a] <= 90)
	{
	  str[a] = str[a] + 32;
	}
      a = a + 1;
    }
  return (str);
}
