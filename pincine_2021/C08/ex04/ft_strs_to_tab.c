/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:18:34 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/14 23:39:00 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stock_str.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(int i)
{
	int	length;
	
	length = 0;
	while (length < i)
	{
		length++;
	}
	return (length);
}

void	ft_free(int i, s_stock_str **massive)
{
	while(i >= 0)
	{
		free(massive[i].copy);
		i--;
	}
	free(massive);
}

char	*ft_strcpy(char *str, int size)
{
	char	*ret;
	int		i;
	
	ret = NULL;
	ret = malloc(sizeof(char) * (size + 1));
	i = 0;
	while (str[i])
	{
		ret[i] = str[i];
		i += 1;
	}
	ret[i] = 0;
	return (ret);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *buff;
    int     i;

    buff = (t_stock_str *)((ac + 1) * sizeof(t_stock_str));
    if (!buff)
        return (NULL);
    while (i < ac)
    {
        buff[i].size = ft_strlen(ac);
        buff[i].copy = ft_strcpy(av[i], buff[i].size);
        if (buff[i].copy == NULL)
        {
            ft_free(buff, i - 1);
            return (0);
        }
        buff[i].str =  av[i];
        i++;
    }
    buff[i].size = 0;
    buff[i].copy = 0;
    buff[i].str = 0;
    return (buff);
}
