/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:18:17 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/18 19:13:13 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int				ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			add(int a, int b);
void			minus(int a, int b);
void			mod(int a, int b);
void			div(int a, int b);
void			mul(int a, int b);

typedef struct s_op
{
	int			vi;
	int			vj;
}				t_op;

#endif