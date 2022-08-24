# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcorrea- <hcorrea-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/23 07:56:38 by hcorrea-          #+#    #+#              #
#    Updated: 2022/08/23 07:56:47 by hcorrea-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIRSRC		= srcs/

SRCS		= ${DIRSRC}main.c ${DIRSRC}no_args.c ${DIRSRC}ft_putchar.c ${DIRSRC}ft_putstr.c ${DIRSRC}ft_file_read.c

OBJS		= ${SRCS:.c=.o}

NAME		= ft_cat

CC			= gcc
RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

${NAME}:	${OBJS}
			gcc -o ${NAME} ${OBJS} ${CFLAGS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
