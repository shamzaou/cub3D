/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 07:50:48 by shamzaou          #+#    #+#             */
/*   Updated: 2024/02/19 09:41:36 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int game(char *map)
{
    char **map_grid;

    
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