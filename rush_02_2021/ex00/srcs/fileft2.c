/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileft2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisner <aisner@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:12:54 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/22 17:48:41 by lliane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fileft2.h"
#include "../includes/err.h"
#include "../includes/parsegm.h"
#include <stdlib.h>

int	skipline(char *buf, char **searchstr, char *beginstr)
{
	while ((*buf != 0) && (*buf != '\n'))
		buf++;
	if (*buf == '\n')
	{
		*searchstr = beginstr;
		return (1);
	}
	else
		return (0);
}

int	findnum(char *buf, char **searchstr, int *b)
{
	while ((**searchstr != 0) && (*buf != 0))
	{
		if (*buf != **searchstr)
		{
			*b = 0;
			return (0);
		}
		buf++;
		(*searchstr)++;
	}
	if ((**searchstr == 0) && ((*buf == ':') || (*buf == ' ') || (*buf == 0)))
		return (1);
	return (0);
}

int	findstr(char *buf, int *a)
{
	while (*buf)
	{
		if ((*buf != ':') && (*buf != ' '))
			return (1);
		if (*buf == ':')
			*a = 1;
		buf++;
	}
	return (0);
}

void	ft_initial(int error, int argc, char *str)
{
	if ((argc < 2) || (argc > 3))
	{
		error = 1;
		outerror(error);
	}
}

void	ft_check_error(void)
{
	g_outstr = checkzero(mergestrs(g_outstr, "\n"));
	ft_putstr(g_outstr);
	free(g_outstr);
}
