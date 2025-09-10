CFLAGS = -Wall -Werror -Wextra

all: rush-02

rush-02: main.o parsing.o separator.o utils.o
	cc $(CFLAGS) main.o parsing.o separator.o utils.o -o rush-02

main.o: main.c
	cc $(CFLAGS) -c main.c

parsing.o: parsing.c
	cc $(CFLAGS) -c parsing.c

separator.o: separator.c
	cc $(CFLAGS) -c separator.c

utils.o: utils.c
	cc $(CFLAGS) -c utils.c

fclean:
	rm  rush-02 *.o
