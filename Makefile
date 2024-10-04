CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJ = ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strchr.o ft_strdup.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_tolower.o ft_toupper.o ft_itoa.o ft_putchar_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_putstr_fd.o ft_split.o ft_striteri.o ft_strjoin.o ft_strmapi.o ft_strtrim.o ft_substr.o

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean fclean all re
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f libft.a

re: fclean all
