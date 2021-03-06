/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <rlecart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 14:39:22 by rlecart           #+#    #+#             */
/*   Updated: 2017/08/30 20:11:45 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include <libft.h>
# include <mlx.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <errno.h>
# include <string.h>

typedef struct		s_piece
{
	int				height;
	int				width;
	int				size;
	int				**coor;
	char			**tab_piece;
}					t_piece;

typedef struct		s_frame
{
	char			player;
	int				**frame_list;
	int				nb;
}					t_frame;

typedef struct		s_map
{
	int				height;
	int				width;
	char			**tab_map;
}					t_map;

typedef struct		s_fil
{
	int				sw;
	char			*line;
	char			player;
	t_piece			piece;
	t_frame			p1;
	t_frame			p2;
	t_map			map;
}					t_fil;

void				error(int i);
int					sp_gnl(char **line);

void				init(t_fil *e);
void				init_tab_piece(t_piece *piece);
void				init_tab_map(t_map *map);

void				get_map_size(t_fil *e);
void				get_info(t_fil *e);
void				get_piece(t_fil *e);

void				add_coordinates_player(t_frame *p, int *coor);
int					parser(t_fil *e, int y, int x);
int					check_place(t_fil *e, int height, int width);

void				piece_reset(t_fil *e);
void				clean_tab_piece(t_piece *piece);
void				clean_tab_map(t_map *map);
void				clean_piece(t_piece *piece);
void				clean_frame_list(t_fil *e);

int					result(t_fil *e);
void				print_result(t_fil *e, int height, int width, int end);

#endif
