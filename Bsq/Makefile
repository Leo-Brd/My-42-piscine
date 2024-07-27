SRCS=			./srcs
INCLUDES=		./includes

_MY_HEADERS=	header.h \
				utils.h \
				resolve_square.h \
				verif_map.h \
MY_HEADERS=		$(addprefix $(INCLUDES)/,$(_MY_HEADERS))

_MY_SOURCES=	main.c \
				open_map.c \
				search_params.c \
				utils/alloc_utils.c \
				utils/int_utils.c \
				utils/str_utils.c \
				utils/other_utils.c \
				verif_map/verif_map.c \
				verif_map/verif_functions.c \
				resolve_square/resolve_square.c \
				resolve_square/square.c
MY_SOURCES=		$(addprefix $(SRCS)/,$(_MY_SOURCES))

MY_OBJECTS=		$(MY_SOURCES:.c=.o)

NAME=			final
CC=				cc
CFLAGS=			-Wall -Wextra -Werror -g3

.PHONY: clean, fclean, all, re, debug

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	cc -I $(INCLUDES) $^ -o $@

$(SRCS)/%.o: $(SRCS)/%.c
	cc -I $(INCLUDES) $(CFLAGS) -c $^ -o $@

clean:
	rm -f $(MY_OBJECTS) debug-$(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

debug: $(MY_SOURCES)
	cc -I $(INCLUDES) -g $(CFLAGS) $^ -o $@-$(NAME)
