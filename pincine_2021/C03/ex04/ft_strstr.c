/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 19:51:38 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/08 20:16:51 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
