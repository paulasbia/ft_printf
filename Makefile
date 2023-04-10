NAME = libftprintf.a

SRCS =  ft_printf.c ft_putchar_fd.c  ft_putstr_fd.c ft_putnbr_fd.c  ft_putuninbr.c ft_hexa.c  ft_adressp.c 

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

%.o: %.c
	cc $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar -crs $(NAME) $(OBJS) 
	
test: all
	gcc -ggdb $(FLAGS) ft_printf.c $(NAME) -lbsd -o result.out

run: clean fclean
	./result.out

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

valgrind: clean fclean test
	rm -f $(OBJS) $(NAME)
	valgrind --leak-check=full ./result.out

.PHONY: clean fclean all re