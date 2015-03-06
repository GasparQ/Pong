/*
** 101pong.h for 101 pong in /home/gaspar_q/rendu/101pong/include
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Mon Nov 10 12:45:15 2014 quentin gasparotto
** Last update Mon Nov 10 23:53:15 2014 quentin gasparotto
*/

#ifndef PONG_H_
# define PONG_H_

typedef struct	s_three_d
{
  int		x;
  int		y;
  int		z;
}		t_three_d;

# include <stdlib.h>
# include <math.h>

void	my_put_double(double nbr);
double	get_norm(t_three_d vector);
void	display_coord(t_three_d vector_speed, t_three_d vector_pos, t_three_d ortho_proj, int n);
void	get_disp(t_three_d point_tmo, t_three_d point_t, int n);

#endif /* !PONG_H */
