/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 02:39:32 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/15 02:41:10 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	char	next;

	while (*str)
	{
		next = *str;
		if (next == '\0')
		{
			break ;
		}
		ft_putchar(next);
		str++;
	}
}