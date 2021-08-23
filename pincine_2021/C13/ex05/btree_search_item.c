/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 20:53:28 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/20 20:59:50 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref, \
							int (*cmpf)(void *, void *))
{
	void	*out;

	out = ((void *)0);
	if (root)
	{
		out = btree_search_item(root->left, data_ref, cmpf);
		if (!out && !((*cmpf)(root->item, data_ref)))
			out = root->item;
		if (!out)
			out = btree_search_item(root->right, data_ref, cmpf);
	}
	return (out);
}
