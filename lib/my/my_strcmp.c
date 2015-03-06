/*
** my_strcmp.c for my_strcmp in /home/gaspar_q/rendu/Piscine_C_J06
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Mon Oct  6 13:29:56 2014 quentin gasparotto
** Last update Tue Oct 21 16:45:54 2014 quentin gasparotto
*/

int	my_strcmp(char *s1, char *s2)
{
  int	a;
  int	renvoi;

  a = 0;
  while (s2[a] == s1[a] && (s1[a] != '\0' || s2[a] != '\0'))
    {
      a = a + 1;
    }
  return (s1[a] - s2[a]);
}
