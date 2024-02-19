/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cubfile.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 08:02:41 by shamzaou          #+#    #+#             */
/*   Updated: 2024/02/19 09:27:24 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int is_cubfile(char *path)
{
    int len;

    len = ft_strlen(path);
    
    if (path[len - 1] == 'b')
        return (0);
    if (path[len - 2] == 'u')
        return (0);
    if (path[len - 3] == 'c')
        return (0);
    if (path[len - 4] == '.')
        return (0);
    if (!isprint(path[len - 5]))
        return (0);
    return (1);
}