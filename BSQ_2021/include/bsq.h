/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 02:26:25 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/25 06:38:58 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# include "struct.h"
# include "function.h"
# include "myfunction.h"

# define EROR_MSG "map error\n"
t_map	*ft_KO(t_map *map, int idx);

#endif
