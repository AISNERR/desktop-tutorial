/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileft2.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenedar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 16:45:18 by lbenedar          #+#    #+#             */
/*   Updated: 2020/09/27 16:46:10 by lbenedar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEFT2_H
# define FILEFT2_H

int		skipline(char *buf, char **searchstr, char *beginstr);
int		findnum(char *buf, char **searchstr, int *b);
int		findstr(char *buf, int *a);
#endif
