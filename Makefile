# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cacarval <cacarval@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/28 14:48:47 by cacarval          #+#    #+#              #
#    Updated: 2023/04/28 16:35:52 by cacarval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_printptr.c ft_printstd.c ft_printuns.c ft_printhex.c

OBJS = ${SRC:.c=.o}

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I .
MAKE = make -C
LIBFT = libft
LIBFT_PATH = ${LIBFT}/libft.a

.o:.c
		${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		${MAKE} ${LIBFT}
		cp ${LIBFT_PATH} ${NAME}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${MAKE} ${LIBFT} clean
		${RM} ${OBJS}

fclean: clean
		${MAKE} ${LIBFT} fclean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re