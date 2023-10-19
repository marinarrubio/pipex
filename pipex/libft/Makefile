# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 12:43:21 by marubio-          #+#    #+#              #
#    Updated: 2023/07/12 11:05:19 by marubio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strncmp.c ft_memchr.c \
ft_memcmp.c ft_strnstr.c ft_atoi.c ft_strrchr.c ft_calloc.c ft_strdup.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_substr.c \
ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_striteri.c ft_itoa.c ft_split.c \


BONUS	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
ft_lstiter_bonus.c ft_lstclear_bonus.c ft_lstmap_bonus.c \

NAME 	= libft.a

CC		= gcc

CFLAGS = -Wall -Werror -Wextra

OBJS = $(SRC:.c=.o)

BONUS_OBJS	= ${BONUS:.c=.o}

${NAME}: ${OBJS}
	@ar r ${NAME} ${OBJS}

all: ${NAME}

clean:
	@rm -f ${OBJS} ${BONUS_OBJS}

fclean: clean
	@rm -f ${NAME}

re: fclean all

bonus: ${OBJS} ${BONUS_OBJS}
	@ar r ${NAME} ${OBJS} ${BONUS_OBJS}

.PHONY: all clean fclean re