/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsegm.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:09:35 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/21 19:09:59 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSEGM_H
# define PARSEGM_H

int		outf_segment(char *searchstr, char *dictname);
int		outs_segment(char *searchstr, char *dictname);
int		outth_segment(char *searchstr, char *dictname);
int		outfo_segment(int length, char *dictname);
char	*checkzero(char *str);
#endif
