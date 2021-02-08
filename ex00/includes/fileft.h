/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenedar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 16:43:56 by lbenedar          #+#    #+#             */
/*   Updated: 2020/09/27 18:43:16 by lbenedar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEFT_H
# define FILEFT_H

char	*trim(char *str);
int		outfoundstr(int fd, char *buf);
int		readfile(int fd, char *searchstr);
int		searchvariant(char *searchstr, char *dictname);
#endif
