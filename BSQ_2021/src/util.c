/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 02:25:35 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/25 05:32:40 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*expand_size(char *src, int *size)
{
	char	*rat;

	rat = (char *)malloc(*size << 1);
	if (!(rat))
		exit (0);
	ft_strncpy(rat, src, *size);
	*size <<= 1;
	free(src);
	return (rat);
}

int	ft_is_number(char c)
{
	return ('0' <= c && c <= '9');
}

int	ft_atoi(char *str)
{
	int	num;

	if (*str == '0')
		return (0);
	num = 0;
	while (*str)
	{
		if (!ft_is_number(*str))
			return (0);
		num *= 10;
		num += (*str - '0');
		++str;
	}
	return (num);
}

int	ft_is_valid_map(char *line, t_map *map)
{
	while (*line)
	{
		if (*line != map->emp && *line != map->obst)
			return (0);
		++line;
	}
	return (1);
}

t_map	*ft_KO(t_map *map, int idx)
{
	if (idx != map->y_len)
	{
		freedom_map(map, idx);
		return ((void *)0);
	}
	return (map);
}
