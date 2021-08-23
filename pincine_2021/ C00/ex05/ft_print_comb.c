/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 23:02:23 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/05 23:02:28 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

void	ft_putchar(char c);

void	comb(char a, char b, char c, bool check)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	ft_putchar(check);
	if (check)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	bool	check;
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				check = !(a == '7' && b == '8' && c == '9');
				comb(a, b, c, check);
				c++;
			}
			b++;
		}
		a++;
	}
}
