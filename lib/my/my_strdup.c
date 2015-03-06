/*
** my_strdup.c for my_strdup in /home/gaspar_q/rendu/Piscine_C_J08/ex_01
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Wed Oct  8 09:20:32 2014 quentin gasparotto
** Last update Wed Oct  8 09:39:03 2014 quentin gasparotto
*/

#include <stdlib.h>

char	*my_strdup(char *src)
{
  int	len;
  int	a;
  char	*dest;

  len = my_strlen(src);
  a = 0;
  dest = malloc(len);
  while (src[a] != '\0')
    {
      dest[a] = src[a];
      a = a + 1;
    }
  return (dest);
}
