/*
** my_strcapitalize.c for my_strcapitalize in /home/gaspar_q/rendu/Piscine_C_J06
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Mon Oct  6 16:15:59 2014 quentin gasparotto
** Last update Tue Oct  7 15:36:29 2014 quentin gasparotto
*/

void	which_type(char *str, int a)
{
  a = a - 1;
  if (str[a + 1] >= 97 && str[a + 1] <= 122)
    {
      if ((str[a] >= 32 && str[a] <= 48) || (str[a] >= 58 && str[a] <= 64))
	    {
	      str[a + 1] = str[a + 1] - 32;
	    }
      else if (a + 1 == 0)
	{
	  str[a + 1] = str[a + 1] - 32;
	}
    }
  else if (str[a + 1] >= 65 && str[a + 1] <= 90)
    {
      if ((str[a] >= 97 && str[a] <= 122) || (str[a] >= 65 && str[a] <= 90))
	{
	  str[a + 1] = str[a + 1] + 32;
	}
    }
}

char	*my_strcapitalize(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      which_type(str, a);
      a = a + 1;
    }
  return (str);
}
