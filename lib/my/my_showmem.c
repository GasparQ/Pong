/*
** my_showmem.c for my_showmem in /home/gaspar_q/rendu/Piscine_C_J06/ex_18
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Thu Oct 16 15:41:20 2014 quentin gasparotto
** Last update Mon Oct 20 14:30:38 2014 quentin gasparotto
*/

void	display_hexa(char *str, int len, int cmpt_size)
{
  int	cmpt_char;

  cmpt_char = 0;
  while (cmpt_char < 16)
    {
      if (str[cmpt_char] > -128 && str[cmpt_char] < 128 && str[cmpt_char] != 0)
	{
	  my_putnbr_base(str[cmpt_char], "0123456789abcdef");
	}
      else if (str[cmpt_char] == '\0')
	{
	  my_putchar('0');
	  my_putchar('0');
	}
      else
	{
	  my_putchar(' ');
	  my_putchar(' ');
	}
      cmpt_char = cmpt_char + 1;
      if (cmpt_char % 2 == 0)
	my_putchar(' ');
    }
}

void	display_str(char *str)
{
  int	cmpt_char;

  cmpt_char = 0;
  while (cmpt_char < 16)
    {
      if ((str[cmpt_char] > 31 && str[cmpt_char] < 127) || str[cmpt_char] == 0)
	my_putchar(str[cmpt_char]);
      else
	my_putchar('.');
      cmpt_char = cmpt_char + 1;
    }
}

int	my_showmem(char *str, int size)
{
  int	cmpt_size;
  int	cmpt_char;
  int	len_str;

  cmpt_size = 0;
  len_str = my_strlen(str);
  while (cmpt_size <= size)
    {
      my_putnbr_base(str, "0123456789abcdef");
      my_putchar(' ');
      display_hexa(str, len_str, cmpt_size);
      display_str(str);
      my_putchar('\n');
      cmpt_size = cmpt_size + 16;
      str = str + 16;
    }
  return (0);
}
