/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freedom.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 02:24:38 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/25 02:35:03 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	freedom_map(t_map *map, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		free(map->arr[i]);
	free(map->arr);
	free(map);
}
