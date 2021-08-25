/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 02:25:09 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/25 03:47:47 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	bsq(char *file)
{
	t_map		*map;
	t_square	*square;

	if (file)
		map = read_file(file);
	else
		map = read_stdin();
	if (!map)
	{
		ft_putstr(EROR_MSG);
		return ;
	}
	square = find_bsq(map);
	if (!square->len)
		ft_putstr(EROR_MSG);
	else
		print(map, square);
	freedom_map(map, map->y_len);
	free(square);
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc == 1)
		bsq(0);
	else
	{
		i = 0;
		while (++i < argc)
		{
			if (i > 1)
				write(1, "\n", 1);
			bsq(argv[i]);
		}
	}
	return (0);
}
