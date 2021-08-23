/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 22:14:48 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/12 05:14:36 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		nb = 2;
	i = nb;
	while (i <= 2147483647)
	{
		if (ft_is_prime(i) == 1)
			return (i);
		++i;
	}
	return (0);
}

int main()
{
	int i;

	i = 11;
	printf("%d", ft_find_next_prime(i));
}
