# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emfourni <emfourni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 14:40:07 by emfourni          #+#    #+#              #
#    Updated: 2024/02/02 16:15:29 by emfourni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_isascii.c ft_isalnum.c ft_calloc.c \
	ft_isalpha.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcpy.c \
	ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c \
	ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	ft_tolower.c ft_toupper.c ft_memcmp.c \
	ft_substr.c	ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_basics.c ft_printf.c ft_printhexa.c ft_printnbr.c \
	get_next_line.c get_next_line_utils.c \

OBJ = $(SRC:.c=.o)

OBJ_BONUS =  $(SRC_BONUS:.c=.o)

FLAGS = -Wall -Wextra -Werror

.c.o:
	cc $(FLAGS) -I libft/libft.h -c $< -o $(<:.c=.o)

$(NAME):    $(OBJ)
			ar -rc -o $(NAME) $(OBJ)

all:    $(NAME)

bonus :  $(OBJ_BONUS)
			ar -rc -o $(NAME) $(OBJ_BONUS)

clean:
		rm -f $(OBJ) $(OBJ_BONUS)

fclean:    clean
		rm -f $(NAME)

re:    fclean all
