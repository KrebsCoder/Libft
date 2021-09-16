# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/23 15:27:40 by lkrebs-l          #+#    #+#              #
#    Updated: 2021/09/15 22:04:08 by lkrebs-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C_SOURCE = ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar.c ft_split.c \
					ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
					ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c \
					ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
					ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c ft_strtrim.c

NAME = libft.a

CFLAGS = -Wextra -Werror -Wall 

CC = clang

RM = rm -f

OBJ=$(C_SOURCE:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
 
all: $(NAME)

$(NAME): $(OBJ) 
	ar crs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) 

re: fclean $(NAME)
 
 .PHONY: all clean fclean re