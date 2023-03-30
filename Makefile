NAME = libftprintf.a

SRCS =  ft_printf.c

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

%.o: %.c
	cc $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar -crs $(NAME) $(OBJS) 
	
test: all
	gcc -ggdb $(FLAGS) main.c unity_internals.h unity.c unity.h $(NAME) -lbsd -o result.out

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

valgrind: clean fclean test
	rm -f $(OBJS) $(NAME)
	valgrind --leak-check=full ./result.out

.PHONY: clean fclean all re