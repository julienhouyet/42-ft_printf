# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhouyet <jhouyet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 08:29:30 by jhouyet           #+#    #+#              #
#    Updated: 2023/11/02 14:07:38 by jhouyet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

SRCS		= ft_printf.c

OBJS		= ${SRCS:.c=.o}

LIB_NAME	= ./libft/libft.a

LIB_PATH	= ./libft/

CC			= gcc

RM			= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${LIB_NAME} ${OBJS}
	ar rc ${NAME} ${OBJS}

${LIB_NAME}:
	${MAKE} bonus -C ${LIB_PATH}
	mv ${LIB_NAME} ${NAME}

all: ${NAME}

clean:
	${MAKE} clean -C ${LIB_PATH}
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME} ${LIB_NAME}

re:	fclean all

.PHONY:	all bonus clean fclean re