/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:42:34 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/18 16:57:46 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*r;

	i = 0;
	r = (int *)malloc(sizeof(int) * length);
	if (r == NULL)
		return (NULL);
	while (i < length)
	{
		r[i] = f(tab[i]);
		i++;
	}
	return (r);
}
