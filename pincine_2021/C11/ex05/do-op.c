/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:16:41 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/18 19:04:22 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

void	ft_dispatch(t_op data, char *op)
{
	void	(*tab[5])(int, int);

	tab[0] = &add;
	tab[1] = &minus;
	tab[2] = &mod;
	tab[3] = &div;
	tab[4] = &mul;
	if (*op == '+')
		tab[0](data.vi, data.vj);
	if (*op == '-')
		tab[1](data.vi, data.vj);
	if (*op == '%')
		tab[2](data.vi, data.vj);
	if (*op == '/')
		tab[3](data.vi, data.vj);
	if (*op == '*')
		tab[4](data.vi, data.vj);
}

void	ft_doop(char *v1, char *op, char *v2)
{
	t_op	data;

	data.vi = ft_atoi(v1);
	data.vj = ft_atoi(v2);
	if (op[1] != '\0' || (op[0] != '/' && op[0] != '%'
			&& op[0] != '+' && op[0] != '-' && op[0] != '*'))
		write(1, "0\n", 2);
	else if (op[0] == '/' && data.vj == 0)
		write(1, "Stop : division by zero\n", 24);
	else if (op[0] == '%' && data.vj == 0)
		write(1, "Stop : modulo by zero\n", 22);
	else
		ft_dispatch(data, op);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		ft_doop(argv[1], argv[2], argv[3]);
	return (0);
}
