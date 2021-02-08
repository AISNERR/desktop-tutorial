/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenedar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 11:11:49 by lbenedar          #+#    #+#             */
/*   Updated: 2020/09/27 19:12:31 by lbenedar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./includes/fileft.h"
#include "./includes/cstd.h"
#include "./includes/parsegm.h"

extern char *g_outstr;

int		isstringvalid(char **str)
{
	char	*substr;
	char	*beginstr;
	int		k;

	if (str == 0)
		return (0);
	beginstr = *str;
	substr = *str;
	k = 1;
	while (**str)
	{
		if ((*substr == '0') && (k == 1))
			substr++;
		else
			k = 0;
		if ((**str < '0') || (**str > '9'))
			return (0);
		(*str)++;
	}
	if (*substr == 0)
		*str = beginstr;
	else
		*str = substr;
	return (1);
}

int		parsefirst(char *searchstr, int length, char *dictname, int *f)
{
	int res;

	res = 0;
	if ((length % 3 == 0) && (*searchstr > '0') && (*f = 1))
	{
		res = outf_segment(searchstr, dictname);
		g_outstr = mergestrs(g_outstr, " ");
		res = searchvariant("100", dictname);
	}
	else if (length % 3 == 2)
	{
		if ((*searchstr == '1') && (*f = 2))
			res = outs_segment(searchstr, dictname);
		else if ((*searchstr > '1') && (*f = 1))
			res = outth_segment(searchstr, dictname);
	}
	else if ((*f != 2) && (*searchstr != '0') && (*f = 1))
		res = outf_segment(searchstr, dictname);
	return (res);
}

int		parse(char *str, int length, char *dictname, int *f)
{
	char	*searchstr;
	int		res;

	res = 0;
	searchstr = malloc(sizeof(char) * (length + 1));
	if (!searchstr)
		return (-1);
	searchstr[0] = *str;
	searchstr[1] = *(str + 1);
	res = parsefirst(searchstr, length, dictname, f);
	if (res == -1)
	{
		free(searchstr);
		return (res);
	}
	if ((length > 3) && (length % 3 == 1) && (*f > 0))
	{
		if (res == 1)
			g_outstr = mergestrs(g_outstr, " ");
		res = outfo_segment(length, dictname);
	}
	free(searchstr);
	return (res);
}

int		convertnum(char *str, char *dictname)
{
	int length;
	int flag;
	int res;

	if (!isstringvalid(&str))
		return (2);
	length = ft_strlen(str);
	if (*str == '0')
		return ((searchvariant("0", dictname)) ? 0 : 1);
	flag = 0;
	res = 0;
	while (*str)
	{
		res = parse(str, length, dictname, &flag);
		if (res == 1)
			g_outstr = mergestrs(g_outstr, " ");
		if (res == -1)
			return (3);
		length--;
		str++;
		if (length % 3 == 0)
			flag = 0;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int error;

	g_outstr = 0;
	error = 0;
	if ((argc < 2) || (argc > 3))
	{
		error = 1;
		outerror(error);
	}
	else if (argc == 2)
	{
		if ((error = convertnum(argv[1], "./dictionaries/numbers.dict")))
			outerror(error);
	}
	else if (argc == 3)
		if ((error = convertnum(argv[2], argv[1])))
			outerror(error);
	if (!error)
	{
		g_outstr = checkzero(mergestrs(g_outstr, "\n"));
		ft_putstr(g_outstr);
		free(g_outstr);
	}
	return (0);
}
