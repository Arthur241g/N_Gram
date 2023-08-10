CC = gcc
CFLASS = -g -wall -wextra -werror
SRC = my_ngram.c
TARGET = my_ngram
OBJ = my_ngram.o

all : $(TARGET)

$(TARGET) : $(OBJ)
	gcc $(CFLAGS) -o $(TARGET) $(OBJ) 

$(OBJ) : $(SRC)
	gcc $(CFLAGS) -c $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(TARGET)

re: fclean all