/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 23:03:10 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/05 23:03:15 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	ft_translate(char x, int y)
{
	char	d;

	if (y == 1)
	{
		d = x / 10 + '0';
	}
	else
	{
		d = x % 10 + '0';
	}
	return (d);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = -1;
	while (a++ < 99)
	{
		b = a;
		while (b++ < 99)
		{
			if (!(a == 0 && b == 1 ))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar(ft_translate(a, 0));
			ft_putchar(ft_translate(a, 1));
			ft_putchar(' ');
			ft_putchar(ft_translate(b, 0));
			ft_putchar(ft_translate(b, 0));
		}
	}
}
