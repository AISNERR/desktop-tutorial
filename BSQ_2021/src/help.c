/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 02:24:52 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/25 05:32:25 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	help_map_info(t_map *map, char *info)
{
	int	ret;

	ret = parse_map_info_sub(map, info);
	if (!ret)
		free(map);
	free(info);
	return (ret);
}

char	*read_line(int fd)
{
	char	*line;
	char	c;
	int		idx;
	int		size;

	idx = 0;
	size = 2;
	line = (char *)malloc(size);
	if (!(line))
		exit(0);
	while (read(fd, &c, 1))
	{
		if (c == '\n')
		{
			line[idx] = 0;
			break ;
		}
		if (idx + 1 == size)
			line = expand_size(line, &size);
		line[idx++] = c;
	}
	if (idx == 0)
		return (free_line(line));
	return (line);
}

t_map	*read_map(int fd, int stdin)
{
	char	*line;
	int		idx;
	t_map	*map;

	stdin = 0;
	map = (t_map *)malloc(sizeof(t_map));
	if (!(map))
		exit(0);
	if (!help_map_info(map, read_line(fd)))
		return (0);
	map->arr = (char **)malloc(sizeof(char *) * map->y_len);
	if (!(map->arr))
		exit(0);
	idx = 0;
	map->x_len = 0;
	line = read_line(fd);
	while (line)
	{
		if (!read_map_sub(&idx, map, line))
			return (0);
		line = read_line(fd);
	}
	return (ft_KO(map, idx));
}

t_map	*read_stdin(void)
{
	return (read_map(0, 1));
}

t_map	*read_file(char *file)
{
	int	fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	return (read_map(fd, 0));
}
