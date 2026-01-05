/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 09:13:19 by dgarot            #+#    #+#             */
/*   Updated: 2025/12/17 23:27:25 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

/* ============================== */
/*            INCLUDES            */
/* ============================== */

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

/* ============================== */
/*           STRUCTURES           */
/* ============================== */

typedef struct s_map
{
	char	mpt_symbol;
	char	obs_symbol;
	char	ful_symbol;
	char	**grid;
	int		size_line;// Largeur
	int		nb_line;// Hauteur
}			t_map;

typedef struct s_sol
{
	int		x;
	int		y;
	int		side;
}			t_sol;

int			main(int ac, char **av);

/* ============================== */
/*           Read map             */
/* ============================== */

int			check_line_validity(char *content, int *i, t_map *map,
				int first_len);
int			get_file_size(char *file_name);
char		*read_file_content(char *file_name, int size);
char		*read_map(char *file_name);

/*taille map max malloc la taille max */
/*check si le premier octet du buffer est bien un nbr positif */
/*check si la map est bien composer de o et de . pas de x et pas que des o*/
/*suppress la premiere ligne*/
/*verifier a longueur des lignes entre \n*/
/*on de coupe et on stock dans des arrays*/

/* ============================== */
/*          Map Parsing / create  */
/* ============================== */

int			parse_number(char *content, int len);
int			parse_header(char *content, t_map *map);
char		**grid(char *content, t_map *map);
char		**parse_and_create_grid(char *content, t_map *map, int start);
char		*read_stdin(void);
int			validate_and_fill_line(char *content, t_map *map, int *i, int row);
int			get_map_width(char *content, int start);
char		**allocate_grid(t_map *map);

/* ============================== */
/*            Read_map            */
/* ============================== */

int			get_file_size(char *file_name);
char		*read_file_content(char *file_name, int size);
char		*read_map(char *file_name);
int			is_vallid_lines(char *content, t_map *map);

/* ============================== */
/*              SOLVE             */
/* ============================== */

t_sol		find_biggest_square(t_map *map);
void		fill_square(t_map *map, t_sol sol);
void		fill_dp_table(t_map *map, int **dp, t_sol *best);
int			**allocate_dp(int rows, int cols);
int			get_min_of_three(int a, int b, int c);
void		init_first_line(t_map *map, int **dp, t_sol *best);
void		init_first_col(t_map *map, int **dp, t_sol *best);

/* ============================== */
/*              PRINT             */
/* ============================== */

// static void	ft_putchar(char c);
void		print_map(t_map *map);
void		print_maps_error(void);

/* ============================== */
/*              UTILS             */
/* ============================== */

int			ft_atoi_strict(char *str);
int			ft_strlen(char *str);
int			is_printable(char c);
int			is_same(char a, char b, char c);
void		ft_putstr(char *s);
void		ft_putchar(char c);

/* ============================== */
/*              FREE              */
/* ============================== */

void		free_grid(char **grid, int nb_line);
void		free_dp(int **dp, int rows);
void		free_map(t_map *map);
// void	free_map(t_map *map);

#endif