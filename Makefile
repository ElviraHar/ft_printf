# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elharuty <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/27 18:31:51 by elharuty          #+#    #+#              #
#    Updated: 2023/02/27 18:31:53 by elharuty         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= libftprintf.a

SRCS =	ft_strlen.c		\
		ft_strdup.c		\
		ft_itoa.c		\
		ft_memcpy.c		\
		unsigned_itoa.c	\
		printchar.c		\
		printstr.c		\
		printnum.c		\
		hex.c			\
		ft_printf.c

HEADER	= ft_printf.h
OBJ		= $(SRCS:.c=.o)
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
.PHONY	: all clean fclean re bonus

all		:	$(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME)	:	$(OBJ)
	@ar -rcs $(NAME) $(OBJ)

fclean	:	clean
	rm -f $(NAME)

clean	:
	rm -f $(OBJ)

re		:	fclean all
