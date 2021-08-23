/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 23:52:23 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/11 22:21:58 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	response;

	if (power < 0 || nb == 0)
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	response = 1;
	while (power > 0)
	{
		response = response * nb;
		power--;
	}
	return (response);
}
