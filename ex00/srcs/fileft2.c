/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileft2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenedar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 16:35:06 by lbenedar          #+#    #+#             */
/*   Updated: 2020/09/27 16:39:14 by lbenedar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		skipline(char *buf, char **searchstr, char *beginstr)
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

int		findnum(char *buf, char **searchstr, int *b)
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

int		findstr(char *buf, int *a)
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
