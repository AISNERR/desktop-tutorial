/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsegm.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenedar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 16:46:32 by lbenedar          #+#    #+#             */
/*   Updated: 2020/09/27 19:08:58 by lbenedar         ###   ########.fr       */
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
