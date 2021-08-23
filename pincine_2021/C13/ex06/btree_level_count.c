/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 20:53:33 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/20 21:12:11 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	ft_max(int left, int right)
{
	if (left > right)
		return (left);
	else
		return (right);
}

int	btree_level_count(t_btree *root)
{
	if (!root)
		return (0);
	return (ft_max(btree_level_count(root->left),
			btree_level_count(root->right)) + 1);
}
