SRCS=			./srcs
INCLUDES=		./includes

_MY_HEADERS=	ft.h

MY_HEADERS=		$(addprefix $(INCLUDES)/,$(_MY_HEADERS))

_MY_SOURCES=	ft_putchar.c \
		ft_swap.c \
		ft_putstr.c \
		ft_strlen.c \
		ft_strcmp.c

MY_SOURCES=		$(addprefix $(SRCS)/,$(_MY_SOURCES))

MY_OBJECTS=		$(MY_SOURCES:.c=.o)

NAME=			libft.a
AR=			ar rc
CC=				gcc
CFLAGS=			-Wall -Wextra -Werror

.PHONY: clean, fclean, all, re

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	${AR} $(NAME) $(MY_OBJECTS)
	ranlib $(NAME)

.c.o:
	${CC} -I $(INCLUDES) $(CFLAGS) -c $^ -o $@

clean:
	rm -f $(MY_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

