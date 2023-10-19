# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 11:42:25 by marubio-          #+#    #+#              #
#    Updated: 2023/10/17 13:10:49 by marubio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC		=  pipex.c  utils_pipex.c \

NAME 	= pipex

LIB = libft/libft.a

CC		= gcc

CFLAGS = -Wall -Werror -Wextra -g3 -fsanitize=address

OBJS = $(SRC:.c=.o)

${NAME}: ${OBJS}
	@make -C ./libft
	$(CC) $(CFLAGS) $(LIB) ${OBJS}  -o ${NAME} 

all: ${NAME}

clean:
	@make clean -C ./libft
	@rm -f ${OBJS} 

fclean: clean
	@make fclean -C ./libft
	@rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
