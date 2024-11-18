CC = cc

CFLAGS = -Werror -Wextra -Wall

SRCS = $(wildcard *.c)
# SRCS = ft_strlcpy.c ft_isalnum.c ft_isdigit.c ft_tolower.c ft_memset.c ft_strdup.c ft_memchr.c ft_memmove.c ft_memcmp.c ft_memcpy.c ft_bzero.c ft_strnstr.c ft_atoi.c ft_strchr.c ft_strjoin.c ft_substr.c ft_split.c ft_isascii.c ft_strrchr.c ft_calloc.c ft_strncmp.c ft_toupper.c ft_isalpha.c ft_strlen.c ft_strlcat.c ft_isprint.c
OBJ = $(SRCS:.c=.o)
LIBS = -lbsd

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
