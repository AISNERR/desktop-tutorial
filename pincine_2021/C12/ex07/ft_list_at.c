/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 09:00:17 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/19 09:11:42 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	while (nbr-- > 0 && begin_list)
		begin_list = (*begin_list).next;
	if (begin_list)
		return (begin_list);
	else
		return (0);
}
