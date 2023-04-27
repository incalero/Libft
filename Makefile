NAME = libft.a
CC = gcc
CFLAG = -Wall -Werror -Wextra
SRC_FILES = ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strlcat.c\
			ft_strlcpy.c \
			ft_strlen.c \

HEADER = libft.h
LIBC = ar rcs

OBJS = $(SRC_FILES:.c=.o)

%.o: %.C
	$(CC) -c $(CFLAG) $^

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm - f $(NAME)

re: fclean all

.PHONY: all clean fclean re



