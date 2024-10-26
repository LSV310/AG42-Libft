CC = cc
CC_WIN = x86_64-w64-mingw32-gcc

CFLAGS = -Wall -Wextra -Werror

PART1_SRCS = Part1/ft_atoi.c Part1/ft_bzero.c Part1/ft_calloc.c Part1/ft_isalnum.c Part1/ft_isalpha.c Part1/ft_isascii.c Part1/ft_isdigit.c Part1/ft_isprint.c Part1/ft_memchr.c Part1/ft_memcmp.c Part1/ft_memcpy.c Part1/ft_memmove.c Part1/ft_memset.c Part1/ft_strchr.c Part1/ft_strdup.c Part1/ft_strlcat.c Part1/ft_strlcpy.c Part1/ft_strlen.c Part1/ft_strncmp.c Part1/ft_strnstr.c Part1/ft_strrchr.c Part1/ft_tolower.c Part1/ft_toupper.c
PART2_SRCS = Part2/ft_itoa.c Part2/ft_putchar_fd.c Part2/ft_putendl_fd.c Part2/ft_putnbr_fd.c Part2/ft_putstr_fd.c Part2/ft_split.c Part2/ft_striteri.c Part2/ft_strjoin.c Part2/ft_strmapi.c Part2/ft_strtrim.c Part2/ft_substr.c
BONUS_SRCS = Bonus/ft_lstadd_back.c Bonus/ft_lstadd_front.c Bonus/ft_lstclear.c Bonus/ft_lstdelone.c Bonus/ft_lstiter.c Bonus/ft_lstlast.c Bonus/ft_lstmap.c Bonus/ft_lstnew.c Bonus/ft_lstsize.c
OBJ = $(PART1_SRCS:.c=.o) $(PART2_SRCS:.c=.o) $(BONUS_SRCS:.c=.o)
OBJ_WIN = $(PART1_SRCS:.c=_win.o) $(PART2_SRCS:.c=_win.o) $(BONUS_SRCS:.c=_win.o)

NAME = libft.a
NAME_WIN = libft_win.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

win: $(OBJ_WIN)
	ar rcs $(NAME_WIN) $(OBJ_WIN)

%_win.o: %.c
	$(CC_WIN) $(CFLAGS) -c $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(OBJ_WIN)

fclean: clean
	rm -f libft.a libft_win.a

re: fclean all

.PHONY: all win clean fclean re
