# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: josfreit <josfreit@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/20 16:26:10 by josfreit          #+#    #+#              #
#    Updated: 2023/10/20 16:26:17 by josfreit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rc
RM = rm -rf

SOURCES = \
	ft_printf.c \
	ft_printf_char.c ft_printf_hex.c ft_printf_nbr.c ft_printf_ptr.c \
	ft_printf_string.c ft_printf_uint.c

OBJECTS = ${SOURCES:.c=.o}

LIBFT_DIR = ./libft
LIBFT = ./libft/libft.a

all: $(NAME)

${NAME}: ${OBJECTS}
	${MAKE} bonus -C ${LIBFT_DIR}
	cp ${LIBFT} ${NAME}
	$(AR) $(NAME) $(OBJECTS)
	@echo '>> Compiling Printf...'

%.o:%.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	${MAKE} clean -C ${LIBFT_DIR}
	$(RM) $(OBJECTS)
	@echo '>> Clean object files *.o...'

fclean: clean
	${MAKE} fclean -C ${LIBFT_DIR}
	$(RM) $(NAME)
	@echo '>> Clean static library *.a...'

re: fclean all
	@echo '>> Reset...'

.PHONY: all bonus clean fclean re
.SILENT: