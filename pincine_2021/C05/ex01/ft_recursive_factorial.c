/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 23:52:09 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/12 04:31:26 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_iterative_factorial(nb - 1));
}