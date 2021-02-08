/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstd.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenedar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 16:41:22 by lbenedar          #+#    #+#             */
/*   Updated: 2020/09/27 17:06:52 by lbenedar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CSTD_H
# define CSTD_H

int		ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
char	*mergestrs(char *str1, char *str2);
void	outerror(int err);
#endif
