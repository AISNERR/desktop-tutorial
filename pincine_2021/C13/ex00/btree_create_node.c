/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 20:39:07 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/20 20:42:12 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree		*tree;

	tree = (t_btree *)malloc(sizeof(t_btree));
	if (tree)
	{
		tree->left = ((void *)0);
		tree->right = ((void *)0);
		tree->item = item;
	}
	return (tree);
}
