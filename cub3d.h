/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 07:30:20 by shamzaou          #+#    #+#             */
/*   Updated: 2024/02/19 12:34:09 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <math.h>
#include "mlx/mlx.h"
#include "get_next_line/get_next_line.h"

typedef struct s_map
{
    int     width;
    int     height;
    char    *north;
    char    *south;
    char    *west;
    char    *east;
    char    *floor_rgb;
    char    *ceiling_rgb;
    char    **grid;
    char    **whole_file;
    int     nlines;
}       t_map;

typedef struct s_player
{
    double  x;
    double  y;
    double  dir_x;
    double  dir_y;
    double  plane_x;
    double  plane_y;
}       t_player;

typedef struct s_texture
{
    int     width;
    int     height;
    void    *img;
}       t_texture;

/* >>>> MAP_PARSE <<<< */
int     is_cubfile(char *path);

/* >>>> UTILS <<<< */
int     ft_error(int error_code);


#endif