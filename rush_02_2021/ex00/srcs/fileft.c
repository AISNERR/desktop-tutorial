/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileft.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliane <lliane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:11:43 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/22 17:48:00 by lliane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fileft2.h"
#include "../includes/err.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "../includes/ft_KO.h"

char	*g_outstr;

char	*trim(char *str)
{
	char	*newstr;
	char	*beginstr;
	int		f;

	newstr = malloc(sizeof(char) * (ft_strlen(str) + 1));
	beginstr = newstr;
	f = 1;
	while (*str)
	{
		if (*str == ' ')
			f = 0;
		else if (f == 0)
		{
			*newstr = ' ';
			newstr++;
		}
		if (f)
		{
			*newstr = *str;
			newstr++;
		}
		str++;
	}
	*newstr = 0;
	return (beginstr);
}

int	outfoundstr(int fd, char *buf)
{
	int		rd;
	char	*newstr;
	char	*substr;

	newstr = 0;
	newstr = mergestrs(newstr, buf);
	rd = read(fd, buf, 1);
	while (rd)
	{
		if (rd == -1)
			return (-1);
		if ((*buf == '\n') || (*buf == 0))
			break ;
		newstr = mergestrs(newstr, buf);
		rd = read(fd, buf, 1);
	}
	substr = trim(newstr);
	g_outstr = mergestrs(g_outstr, substr);
	free(substr);
	free(newstr);
	return (1);
}

int	readfile(int fd, char *searchstr)
{
	int		rd;
	char	buf[2];
	int		b;
	int		colon;
	char	*beginstr;

	b = 1;
	colon = 0;
	beginstr = searchstr;
	rd = read(fd, buf, 1);
	while (rd)
	{
		if (rd == -1)
			return (-1);
		buf[rd] = 0;
		if ((b == 1) && (findnum(buf, &searchstr, &b)))
			b = 2;
		else if (b == 0)
			b = skipline(buf, &searchstr, beginstr);
		else if ((b == 2) && (findstr(buf, &colon)))
			break ;
		rd = read(fd, buf, 1);
	}
	return (ft_KO(b, fd, buf));
}

int	searchvariant(char *searchstr, char *dictname)
{
	int	fd;

	fd = open(dictname, O_RDONLY);
	if (fd == -1)
		return (-1);
	return (readfile(fd, searchstr));
}

int	ft_conversion(char *str, char *dictname)
{
	if (searchvariant("0", dictname) == 1)
		return (0);
	else
		return (1);
}
