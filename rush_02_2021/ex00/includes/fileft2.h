/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileft2.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisner <aisner@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:09:05 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/22 17:51:14 by lliane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEFT2_H
# define FILEFT2_H

int		skipline(char *buf, char **searchstr, char *beginstr);
int		findnum(char *buf, char **searchstr, int *b);
int		findstr(char *buf, int *a);
int		convertnum(char *str, char *dictname);
void	ft_initial(int error, int argc, char *str);
void	ft_check_error(void);

#endif
