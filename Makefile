# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmack <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/11 13:06:34 by tmack             #+#    #+#              #
#    Updated: 2016/05/11 14:40:11 by tmack            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall, -Wextra -Werror
CC = gcc
OBJ = ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_memchr.o \
	  ft_memcmp.o ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strcat.o \
	  ft_strncat.o ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strstr.o \
	  ft_strnstr.o ft_strcmp.o ft_strncmp.o ft_atoi.o ft_isalpha.o ft_isdigit.o \
	  ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o \
	  ft_putchar.o ft_putstr.o ft_putendl.o ft_putnbr.o \
	  ft_putchar_fd.o ft_putstr_fd.o ft_putnbr_fd.o \
	  ft_islower.o ft_isupper.o
all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $<

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

