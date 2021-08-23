/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 01:04:51 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/07 22:36:45 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>


char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src != '\0' && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	unsigned int n;
	char str[6] = "Hello";
	char str2[9] = "";

	n = 3;
	//strncpy(str2, str, n);
	strncpy(str2, str, n);
	printf("%s", str2);
}