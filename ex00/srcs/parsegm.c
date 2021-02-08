/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsegm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenedar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 16:27:03 by lbenedar          #+#    #+#             */
/*   Updated: 2020/09/27 19:13:08 by lbenedar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fileft.h"
#include <stdlib.h>

int		outf_segment(char *searchstr, char *dictname)
{
	*(searchstr + 1) = 0;
	return (searchvariant(searchstr, dictname));
}

int		outs_segment(char *searchstr, char *dictname)
{
	*(searchstr + 2) = 0;
	return (searchvariant(searchstr, dictname));
}

int		outth_segment(char *searchstr, char *dictname)
{
	*(searchstr + 1) = '0';
	*(searchstr + 2) = 0;
	return (searchvariant(searchstr, dictname));
}

int		outfo_segment(int length, char *dictname)
{
	int		i;
	char	*subnum;

	subnum = malloc(sizeof(char) * (length + 1));
	if (!subnum)
		return (0);
	i = 0;
	subnum[i] = '1';
	while (++i < length)
		subnum[i] = '0';
	subnum[i] = 0;
	i = searchvariant(subnum, dictname);
	free(subnum);
	return (i);
}

char	*checkzero(char *str)
{
	char *beginstr;

	beginstr = str;
	while (*str)
		str++;
	if (*(str - 2) == ' ')
	{
		*(str - 2) = '\n';
		*(str - 1) = 0;
	}
	return (beginstr);
}
