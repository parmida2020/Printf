NAME	= libftprintf.a
CC	= cc
CFLAGS	= -Wall -Werror -Wextra
SRCS = ft_printf.c ft_pointer.c ft_print_hex.c ft_putfunc.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(NAME)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 