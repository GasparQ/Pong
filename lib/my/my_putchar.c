/*
** my_put_char.c for my_put_char in /home/gaspar_q/rendu/Piscine_C_J03
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Wed Oct  1 15:36:15 2014 quentin gasparotto
** Last update Wed Oct  1 22:55:42 2014 quentin gasparotto
*/

int my_putchar(char c)
{
  write(1, &c, 1);
}
