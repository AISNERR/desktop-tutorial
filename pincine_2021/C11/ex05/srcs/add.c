/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:27:40 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/18 19:05:20 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/ft.h"

void	add(int a, int b)
{
	int	d;

	d = a + b;
	ft_putnbr(d);
	ft_putchar('\n');
}