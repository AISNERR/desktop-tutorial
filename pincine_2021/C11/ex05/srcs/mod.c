/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mod.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:41:55 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/18 19:11:19 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/ft.h"

void	mod(int a, int b)
{
	int	d;

	d = a % b;
	ft_putnbr(d);
	ft_putchar('\n');
}
