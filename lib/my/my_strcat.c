/*
** my_strcat.c for my_strcat in /home/gaspar_q/rendu/Piscine_C_J07
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Tue Oct  7 10:25:05 2014 quentin gasparotto
** Last update Tue Oct  7 11:13:54 2014 quentin gasparotto
*/

char	*my_strcat(char *dest, char *src)
{
  int	a;
  int	len;

  a = 0;
  len = my_strlen(dest);
  while (src[a] != '\0')
    {
      dest[len + a] = src[a];
      a = a + 1;
    }
  dest[len + a] = '\0';
  return (dest);
}
