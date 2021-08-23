/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:18:25 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/14 19:02:03 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define EVEN(x) x % 2 == 0
# define EVEN_MSG "I have a pair number of arguments."
# define ODD_MSG "I have an impair number of arguments."
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
typedef int		t_bool;
#endif