# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/15 02:39:45 by sgaladri          #+#    #+#              #
#    Updated: 2021/08/15 10:50:41 by sgaladri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -Werror -Wextra -Wall -c ft*.c
ar rc libft.a ft*.o
ranlib libft.a