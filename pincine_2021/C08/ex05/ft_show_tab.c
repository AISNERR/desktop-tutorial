/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:18:36 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/14 23:33:52 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stock_str.h>
#include <unistd.h>
#include <stdlib.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
char	*ft_strcpy(char *dest, char *src);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	char	next;

	while (*str)
	{
		next = *str;
		if (next == '\0')
		{
			break ;
		}
		ft_putchar(next);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

void ft_show_tab(struct s_stock_str *par)
{
    int i;

    i = 0;
    while (par[i].str != 0)
    {
        ft_putstr(par[i].str);
        ft_putchar('\n');
        ft_putnbr(par[i].size);
        ft_putchar('\n');
        ft_putstr(par[i].copy);
        ft_putchar('\n');
        i++;
    }
}