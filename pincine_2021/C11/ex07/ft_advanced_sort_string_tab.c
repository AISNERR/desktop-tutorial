/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:43:07 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/18 19:27:12 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	*tmp;
	int		ordered;
	int		t;

	ordered = 0;
	while (!ordered)
	{
		i = 0;
		ordered = 1;
		while (tab[++i])
		{
			t = cmp(tab[i - 1], tab[i]);
			if (t > 0)
			{
				tmp = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = tmp;
				ordered = 0;
			}
		}
	}
}
