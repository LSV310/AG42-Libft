CC = cc

CFLAGS = -Wall -Wextra -Werror

PART1_OBJ = Part1/ft_atoi.o Part1/ft_bzero.o Part1/ft_calloc.o Part1/ft_isalnum.o Part1/ft_isalpha.o Part1/ft_isascii.o Part1/ft_isdigit.o Part1/ft_isprint.o Part1/ft_memchr.o Part1/ft_memcmp.o Part1/ft_memcpy.o Part1/ft_memmove.o Part1/ft_memset.o Part1/ft_strchr.o Part1/ft_strdup.o Part1/ft_strlcat.o Part1/ft_strlcpy.o Part1/ft_strlen.o Part1/ft_strncmp.o Part1/ft_strnstr.o Part1/ft_strrchr.o Part1/ft_tolower.o Part1/ft_toupper.o
PART2_OBJ = Part2/ft_itoa.o Part2/ft_putchar_fd.o Part2/ft_putendl_fd.o Part2/ft_putnbr_fd.o Part2/ft_putstr_fd.o Part2/ft_split.o Part2/ft_striteri.o Part2/ft_strjoin.o Part2/ft_strmapi.o Part2/ft_strtrim.o Part2/ft_substr.o
OBJ = $(PART1_OBJ) $(PART2_OBJ)
BONUS_OBJ = Bonus/ft_lstadd_back.o Bonus/ft_lstadd_front.o Bonus/ft_lstclear.o Bonus/ft_lstdelone.o Bonus/ft_lstiter.o Bonus/ft_lstlast.o Bonus/ft_lstmap.o Bonus/ft_lstnew.o Bonus/ft_lstsize.o

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

clean:
	rm -f $(OBJ)
	rm -f $(BONUS_OBJ)

fclean: clean
	rm -f libft.a

re: fclean all

.PHONY: all bonus clean fclean re
