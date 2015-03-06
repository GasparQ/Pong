/*
** my_strncpy.c for my_strncpy in /home/gaspar_q/rendu/Piscine_C_J06
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Mon Oct  6 10:00:20 2014 quentin gasparotto
** Last update Mon Oct  6 10:56:11 2014 quentin gasparotto
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (src[i] != '\0' && i < n - 1)
    {
      dest[i] = src[i];
      i = i + 1;
    }
  if (src[i] == '\0')
    {
      dest[n - 1] = '\0';
    }
  else
    {
      dest[n - 1] = src[n - 1];
    }
  return (dest);
}
