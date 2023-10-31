NAME = libft.a

SOURCES = 			ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_strlen.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c \

OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra

AR = ar rcs
RM = rm -f

all: ${NAME} clean

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) -o $@ $(CFLAGS) $?

clean:
	$(AR) $(OBJECTS) $(BOBJECTS)

fclean: clean
	$(AR) $(NAME)

re: clean all

.PHONY: all clean fclean re
