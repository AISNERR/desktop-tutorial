/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_sub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 02:25:19 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/25 03:53:11 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	is_printable(char c)
{
	return (' ' <= c && c <= '~');
}

int	is_valid_map_info(t_map *map)
{
	return (is_printable(map->full)
		&& is_printable(map->obst)
		&& is_printable(map->emp));
}

int	parse_map_info_sub(t_map *map, char *info)
{
	int	j;

	j = ft_strlen(info);
	if (!info || (j) < 4)
		return (0);
	map->full = info[j - 1];
	map->obst = info[j - 2];
	map->emp = info[j - 3];
	if (map->emp == map->obst
		|| map->emp == map->full
		|| map->obst == map->full
		|| !is_valid_map_info(map))
		return (0);
	info[j - 3] = 0;
	map->y_len = ft_atoi(info);
	if (!(map->y_len))
		return (0);
	return (1);
}

char	*free_line(char *line)
{
	free(line);
	return (0);
}

int	read_map_sub(int *idx, t_map *map, char *line)
{
	int	len;

	if (*idx == map->y_len || !ft_is_valid_map(line, map))
	{
		free(line);
		freedom_map(map, *idx);
		return (0);
	}
	len = ft_strlen(line);
	if (map->x_len == 0)
		map->x_len = len;
	if (len != map->x_len)
	{
		free(line);
		freedom_map(map, *idx);
		return (0);
	}
	map->arr[(*idx)++] = line;
	return (1);
}
