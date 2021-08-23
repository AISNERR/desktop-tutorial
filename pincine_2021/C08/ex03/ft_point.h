/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:18:31 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/14 22:41:13 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H
typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

void			set_point(t_point *point);

#endif