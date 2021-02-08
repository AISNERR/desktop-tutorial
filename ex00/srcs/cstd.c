/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenedar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 16:23:59 by lbenedar          #+#    #+#             */
/*   Updated: 2020/09/27 17:51:47 by lbenedar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_putstr(char *str)
{
	char *currstr;

	if (!str)
		return (-1);
	currstr = str;
	while (*currstr != 0)
	{
		write(1, currstr, 1);
		currstr++;
	}
	return (0);
}

int		ft_strlen(char *str)
{
	int length;

	if (!str)
		return (0);
	length = 0;
	while (*str != 0)
	{
		str++;
		length++;
	}
	return (length);
}

char	*ft_strcat(char *dest, char *src)
{
	char *subdest;

	subdest = dest;
	while (*subdest != '\0')
	{
		subdest++;
	}
	while (*src != '\0')
	{
		*subdest = *src;
		subdest++;
		src++;
	}
	*subdest = '\0';
	return (dest);
}

char	*mergestrs(char *str1, char *str2)
{
	char *fullstr;

	fullstr = malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (!fullstr)
		return (0);
	*fullstr = 0;
	if (str1)
		fullstr = ft_strcat(fullstr, str1);
	if (str2)
		fullstr = ft_strcat(fullstr, str2);
	fullstr[ft_strlen(fullstr)] = 0;
	return (fullstr);
}

void	outerror(int err)
{
	if (err == 1)
		ft_putstr("Input Error\n");
	else if (err == 2)
		ft_putstr("Error\n");
	else if (err == 3)
		ft_putstr("Dict Error\n");
}
