/*
** main.c for file with main function in /home/gaspar_q/rendu/101pong
** 
** Made by quentin gasparotto
** Login   <gaspar_q@epitech.net>
** 
** Started on  Mon Nov 10 12:40:48 2014 quentin gasparotto
** Last update Sat Nov 15 15:22:28 2014 quentin gasparotto
*/

#include "include/101pong.h"

void		my_put_double(double nbr)
{
  int		nb_int;

  my_put_nbr((int)nbr);
  nb_int = (nbr - (int)nbr) * 100;
  my_putchar('.');
  my_put_nbr(nb_int);
}

double		get_norm(t_three_d vector)
{
  double	norm;

  norm = sqrt(pow(vector.x, 2) + pow(vector.y, 2) + pow(vector.z, 2));
  return (norm);
}

void		display_coord(t_three_d vector_speed,
			      t_three_d vector_pos,
			      t_three_d ortho_proj,
			      int n)
{
  double        norm_speed;
  double	norm_ortho;
  int		scalaire;

  scalaire = pow(vector_speed.x, 2) + pow(vector_speed.y, 2);
  norm_speed = get_norm(vector_speed);
  norm_ortho = get_norm(ortho_proj);
  my_putstr("Les coordonnées du vecteur vitesse sont (");
  my_put_nbr(vector_speed.x);
  my_putchar(';');
  my_put_nbr(vector_speed.y);
  my_putchar(';');
  my_put_nbr(vector_speed.z);
  my_putstr(")\nA l'instant t+");
  my_put_nbr(n);
  my_putstr(", les coordonnées de la balle seront (");
  my_put_nbr(vector_pos.x);
  my_putchar(';');
  my_put_nbr(vector_pos.y);
  my_putchar(';');
  my_put_nbr(vector_pos.z);
  my_putstr(").\nL'angle d'incidence est de ");
  my_put_double(360 * acos(scalaire / (norm_speed * norm_ortho)) / (2 * M_PI));
  my_putstr(" degrés.\n");
}

void		get_disp(t_three_d point_tmo, t_three_d point_t, int n)
{
  t_three_d	vector_speed;
  t_three_d	vector_pos;
  t_three_d	ortho_proj;
  int		scalaire;

  vector_speed.x = point_t.x - point_tmo.x;
  vector_speed.y = point_t.y - point_tmo.y;
  vector_speed.z = point_t.z - point_tmo.z;
  vector_pos.x = point_t.x + n * vector_speed.x;
  vector_pos.y = point_t.y + n * vector_speed.y;
  vector_pos.z = point_t.z + n * vector_speed.z;
  ortho_proj.x = vector_speed.x;
  ortho_proj.y = vector_speed.y;
  ortho_proj.z = 0;
  display_coord(vector_speed, vector_pos, ortho_proj, n);
}

int		main(int argc, char **argv)
{
  t_three_d	point_tmo;
  t_three_d	point_t;

  if (argc == 8)
    {
      point_tmo.x = my_getnbr(argv[1]);
      point_tmo.y = my_getnbr(argv[2]);
      point_tmo.z = my_getnbr(argv[3]);
      point_t.x = my_getnbr(argv[4]);
      point_t.y = my_getnbr(argv[5]);
      point_t.z = my_getnbr(argv[6]);
      if (my_getnbr(argv[7]) > 0)
	get_disp(point_tmo, point_t, my_getnbr(argv[7]));
      else
	write(2, "Enter a positive number for the t+n moment\n", 43);
    }
  else
    {
      my_putstr("Usage: ");
      my_putstr(argv[0]);
      my_putstr(" [X t-1] [Y t-1] [Z t-1] [X t] [Y t] [Z t] [n]\n");
    }
  return (0);
}
