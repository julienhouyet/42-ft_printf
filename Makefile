# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhouyet <jhouyet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 08:29:30 by jhouyet           #+#    #+#              #
#    Updated: 2023/11/07 15:11:01 by jhouyet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

SRCS		= 	ft_printf.c \
				ft_printf_str.c

OBJS		= ${SRCS:.c=.o}

LIB_NAME	= ./libft/libft.a

LIB_PATH	= ./libft/

CC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${LIB_NAME} ${OBJS}
	ar rc ${NAME} ${OBJS}

${LIB_NAME}:
	${MAKE} -C ${LIB_PATH}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
	${MAKE} fclean -C ${LIB_PATH}

re:	fclean all

.PHONY: all clean fclean re