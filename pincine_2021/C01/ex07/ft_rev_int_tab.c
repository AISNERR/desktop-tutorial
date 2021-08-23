/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 19:59:35 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/06 21:32:14 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	tmp;

	index = 0;
	while (index < (size / 2))
	{
		tmp = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = tmp;
		index++;
	}
}
