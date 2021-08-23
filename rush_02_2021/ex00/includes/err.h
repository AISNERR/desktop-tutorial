/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstd.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:07:43 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/21 19:07:53 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERR_H
# define ERR_H

int		ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
char	*mergestrs(char *str1, char *str2);
void	outerror(int err);
extern char	*g_outstr;

#endif
