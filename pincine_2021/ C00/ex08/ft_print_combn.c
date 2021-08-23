/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 23:11:11 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/05 23:42:16 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_output(int nb, int *tab, int pos)
{
	int	i;

	i = 0;
	if (pos == 1)
	{
		ft_putchar(',');
		ft_putchar(' ')
	}
	while (i < nb)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}

void	ft_print_combn_increment(int nb, int *tab)
{
	int i;
	int max;

	i = nb - 1;
	max = 9;
	while (tab[i] == max)
	{
		i -= 1;
		max -= 1;
	}
	tab[i] += 1;
	while (i < nb)
	{
		tab[i + 1] = tab[i] + 1;
		i += 1;
	}
}

void	ft_print_combn(int nb)
{
    int tab[10];
    int i;

    i = 0;
    while (i < nb)
    {
        tab[i] = i;
        i++;
    }
    ft_putout(nb, tab, 0);
    while (tab[0] != 10 - nb || tab[nb - 1] != 9)
    {
        if (tab[nb - 1] != 9)
        {
            tab[nb - 1] += 1;
        }
        else
        {
            ft_print_combn_increment(nb, tab);
        }
        ft_putout(nb, tab, 1);
	}
}
