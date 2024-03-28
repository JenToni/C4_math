CC = gcc
FLAGS = -Wall -Wextra -Werror -std=c11
SRC = $(wildcard *.c)
OBJ = $(patsubst %.c, %.o, $(SRC))
SRC2 = $(wildcard ../*.c)
OBJ2 = $(patsubst ../%.c, ../%.o, $(SRC2))


test.a: $(OBJ)
	ar rc test.a $^
	ranlib test.a
	rm -rf *.o

s21_math.a: $(OBJ2)
	ar rc ../s21_math.a $^
	ranlib ../s21_math.a
	rm -rf ../*.o

test: s21_math.a test.a
	$(CC) $(FLAGC) test.a ../s21_math.a -lcheck -lpthread -pthread -o test

clean:
	rm *.o *.a test check.c ../*.o ../*.a


