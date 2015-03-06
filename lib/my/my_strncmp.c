/*
** my_strcmp.c for my_strcmp in /home/gaspar_q/rendu/Piscine_C_J06
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Mon Oct  6 13:29:56 2014 quentin gasparotto
** Last update Sun Oct 26 14:39:39 2014 quentin gasparotto
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	a;
  int	renvoi;

  a = 0;
  if (s2[0] == s1[0] && s1[a] != '\0')
    {
      if (n > 0)
	{
	  while (s2[a] == s1[a] && a < n - 1)
	    a = a + 1;
	}
      else
	{
	  while (s2[a] == s1[a])
	    a = a + 1;
	}
      return (s1[a] - s2[a]);
    }
  else
    return (98 - s2[0]);
}
