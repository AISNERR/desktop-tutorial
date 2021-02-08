# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbenedar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/26 11:11:36 by lbenedar          #+#    #+#              #
#    Updated: 2020/09/27 16:59:51 by lbenedar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRCS = main.c ./srcs/cstd.c ./srcs/fileft.c ./srcs/fileft2.c ./srcs/parsegm.c

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
