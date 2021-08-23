/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 09:46:43 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/13 22:26:54 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(int min, int max)
{
	int	length;

	length = 0;
	while (min <= max)
	{
		length++;
		min++;
	}
	return (length);
}

int	*ft_range(int min, int max)
{
	int	*arr;
	int	length;

	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(*arr) * ft_strlen(min, max));
	length = 0;
	while (min < max)
	{
		arr[length] = min;
		min++;
		length++;
	}
	return (arr);
}
