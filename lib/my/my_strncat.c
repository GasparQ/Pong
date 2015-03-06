/*
** my_strncat.c for my_strncat in /home/gaspar_q/rendu/Piscine_C_J07/ex_01
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Tue Oct  7 11:15:05 2014 quentin gasparotto
** Last update Tue Oct  7 11:25:26 2014 quentin gasparotto
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	a;
  int	len;

  a = 0;
  len = my_strlen(dest);
  while (src[a] != '\0' && a < nb)
    {
      dest[len + a] = src[a];
      a = a + 1;
    }
  dest[a + len] = '\0';
  return (dest);
}
