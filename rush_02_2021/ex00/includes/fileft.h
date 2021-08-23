/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliane <lliane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:08:28 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/22 17:50:34 by lliane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEFT_H
# define FILEFT_H

char	*trim(char *str);
int		outfoundstr(int fd, char *buf);
int		readfile(int fd, char *searchstr);
int		searchvariant(char *searchstr, char *dictname);
int		ft_conversion(char *str, char *dictname);
#endif
