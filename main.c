/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 07:50:48 by shamzaou          #+#    #+#             */
/*   Updated: 2024/02/19 11:37:28 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int game(char *filename)
{
    t_map       *map;
    t_player    *player;

    map = malloc(sizeof(t_map));
    map->nlines = count_lines(filename);
    map->whole_file = malloc(sizeof(char *) * (map->nlines + 1));
    file_to_2d_array(filename, &map);
    validate_array(&map);
}

int main(int ac, char **av)
{
    if (ac != 2)
        printf("Program Cub3D takes one argument *.cub\n");
    else
    {
        if (!is_cubfile(av[1]))
            return (ft_error(1));
        game(av[1]);
    }
    return (0);
}