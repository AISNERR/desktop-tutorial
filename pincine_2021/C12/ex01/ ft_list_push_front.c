/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_list_push_front.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 03:48:33 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/19 06:45:57 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*list;

	if (*begin_list)
	{
		list = ft_create_elem(data);
		list->next = *begin_list;
		*begin_list = list;
	}
	else
		*begin_list = ft_create_elem(data);
}
