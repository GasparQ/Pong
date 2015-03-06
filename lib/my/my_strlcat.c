/*
** my_strlcat.c for my_strlcat in /home/gaspar_q/rendu/Piscine_C_J07/ex_01
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Tue Oct  7 11:27:31 2014 quentin gasparotto
** Last update Tue Oct  7 11:54:26 2014 quentin gasparotto
*/

int	my_strlcat(char *dest, char *src, int size)
{
  int	a;
  int	len;

  a = 0;
  len = my_strlen(dest);
  if (size < len)
    {
      while (src[a] != '\0')
	{
	  a = a + 1;
	}
      return (size + a);
    }
  else
    {
      my_putstr("Donnez une taille inferieure à la longueur de votre chaîne");
      return (0);
    }
}
