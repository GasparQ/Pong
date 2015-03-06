/*
** my_strstr.c for my_strstr in /home/gaspar_q/rendu/Piscine_C_J06
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Mon Oct  6 11:47:48 2014 quentin gasparotto
** Last update Sun Oct 26 14:40:54 2014 quentin gasparotto
*/

char	*my_strstr(char *str, char *to_find)
{
  int	a;
  int	b;

  a = 0;
  if (to_find[0] != '\0')
    {
      b = 0;
      while (str[a] != '\0')
	{
	  if (str[a] == to_find[b])
	    {
	      while (str[a + b] == to_find[b])
		b = b + 1;
	      if (to_find[b] == '\0')
		return (str + a);
	    }
	  a = a + 1;
	}
      return (0);
    }
  return (str);
}
