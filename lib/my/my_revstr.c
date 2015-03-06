/*
** my_revstr.c for my_revstr in /home/gaspar_q/rendu/Piscine_C_J06
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Mon Oct  6 10:14:52 2014 quentin gasparotto
** Last update Sun Oct 26 14:25:49 2014 quentin gasparotto
*/

void	my_swap(char *str, int len)
{
  char	transition;
  int	a;

  a = 0;
  while (a != len / 2)
    {
      transition = str[a];
      str[a] = str[len - a - 1];
      str[len - 1 - a] = transition;
      a = a + 1;
    }
}

char	*my_revstr(char *str)
{
  int	length;
  char	transition;

  length = my_strlen(str);
  my_swap(str, length);
  return (str);
}
