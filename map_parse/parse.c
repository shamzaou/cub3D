/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 07:50:17 by shamzaou          #+#    #+#             */
/*   Updated: 2024/02/19 10:06:07 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int parse(char *file)
{
    t_map *map;

    map = malloc(sizeof(t_map));
    read_and_init(file, &map);
}

void read_and_init(char *file, t_map *map)
{
    int     fd;
    int     i;
    char    *line;
    
    fd = open(file, 0);
    i = 0;
    while (1)
    {
        line = get_next_line(fd);
        
        
    }
}