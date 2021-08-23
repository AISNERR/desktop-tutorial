/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 03:01:19 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/12 06:14:43 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	j;
	int	k;

	j = argc - 1;
	while (argc >= j && j > 0)
	{
		k = 0;
		while (argv[j][k] != '\0')
		{
			ft_putchar(argv[j][k]);
			k++;
		}
		if (j == 1)
			ft_putchar('\n');
		else
			ft_putchar(' ');
		j--;
	}
	return (0);
}
