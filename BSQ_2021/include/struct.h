/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 02:26:03 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/25 04:01:26 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct s_square
{
	int	x;
	int	y;
	int	len;
}				t_square;

typedef struct s_map
{
	char	full;
	char	emp;
	char	obst;
	int		x_len;
	int		y_len;
	char	**arr;
}				t_map;

#endif
