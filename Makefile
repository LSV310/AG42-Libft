CC = cc

CFLAGS = #-Werror -Wextra -Wall -g3

SRCS = $(wildcard *.c)
OBJ = $(SRCS:.c=.o)
LIBS = -lbsd -g3

NAME = libft.a

# all: $(NAME)

# $(NAME): $(OBJ)
#	ar rcs $(NAME) $(OBJ)

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
