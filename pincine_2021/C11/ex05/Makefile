# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/18 18:16:44 by sgaladri          #+#    #+#              #
#    Updated: 2021/08/18 18:46:17 by sgaladri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS = do-op.c ./srcs/mul.c ./srcs/mod.c ./srcs/minus.c ./srcs/ft_putnbr.c ./srcs/ft_putchar.c ./srcs/ft_atoi.c ./srcs/div.c ./srcs/add.c

OBJS = ${SRCS:.c=.o}

RM = rm -f

FLAGS = -Werror -Wextra -Wall

$(NAME): ${OBJS}
	gcc ${FLAGS} ${OBJS} -o ${NAME}
all: $(NAME)

clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all