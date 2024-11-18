CC = cc

CFLAGS = #-Werror -Wextra -Wall -g3

# SRCS = $(wildcard *.c)
SRCS = ft_memcmp.c ft_memcpy.c ft_calloc.c ft_strnstr.c ft_isalpha.c ft_strtrim.c ft_memmove.c ft_isalnum.c ft_isdigit.c ft_isprint.c ft_tolower.c ft_toupper.c ft_strncmp.c ft_strlen.c ft_bzero.c ft_memset.c ft_strchr.c ft_atoi.c ft_isascii.c ft_itoa.c ft_strjoin.c ft_split.c ft_strlcat.c ft_memchr.c ft_strrchr.c ft_strdup.c ft_strlcpy.c
OBJ = $(SRCS:.c=.o)
LIBS = -lbsd -g3

# NAME = libft.a
NAME = a.out

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

a.out: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
