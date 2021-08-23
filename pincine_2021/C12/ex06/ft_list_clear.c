/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 08:42:37 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/19 08:58:20 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*element;
	t_list	*last_element;

	element = begin_list;
	while (element)
	{
		free_fct(element->data);
		last_element = element;
		element = element->next;
		free(last_element);
	}
}
