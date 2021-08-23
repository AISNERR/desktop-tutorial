# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lliane <lliane@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/21 19:04:35 by sgaladri          #+#    #+#              #
#    Updated: 2021/08/22 17:33:27 by lliane           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRCS = main.c ./srcs/err.c ./srcs/fileft.c ./srcs/fileft2.c ./srcs/parsegm.c ./srcs/ft_KO.c

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