/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:29:56 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/10 22:33:47 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_in_base(char letter, char *base)
{
	while (*base)
	{
		if (*base == letter)
		{
			return (1);
		}
		base++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	h;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		h = 0;
		while (str[i + h] != '\0' && str[i + h] == to_find[h])
		{
			if (to_find[h + 1] == '\0')
				return (&str[i]);
			++h;
		}
		++i;
	}
	return (0);
}

int	ft_index_in_base(char letter, char *base)
{
	int	index;

	index = 0;
	while (*base)
	{
		if (*base == letter)
		{	
			return (index);
		}
		base++;
		index++;
	}
	return (0);
}

int	ft_base_size(char *base)
{
	int		size;
	char	check_base[2];

	size = 0;
	while (*base)
	{
		check_base[0] = *base;
		check_base[1] = '\0';
		if (ft_strstr(++base, check_base) == 0)
		{
			size++;
			base--;
		}
		else
			return (-1);
		if (!((*base >= '0' && *base <= '9') || (*base >= 'A' && *base <= 'Z')
				|| (*base >= 'a' && *base <= 'z')))
			return (-1);
		base++;
	}
	if (size < 2)
		return (-1);
	return (size);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_size;
	int	number;
	int	sign;

	base_size = ft_base_size(base);
	number = 0;
	sign = -1;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	while (*str && (*str == '-' || *str == '+'))
	{
		++str;
		if (*str == '-')
			sign *= -1;
	}
	while (*str)
	{
		if (ft_in_base(*str, base) == 0)
			return (0);
		number = number * base_size + (ft_index_in_base(*str, base));
		str++;
	}
	return (number * sign);
}

int main()
{
	int i = ft_atoi_base("32", "01234567");
	printf("%d", i);
}