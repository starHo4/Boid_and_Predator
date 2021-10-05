OBJS = main.o PVector.o
CC = g++
STD = -std=c++17

all : main clean

main : $(OBJS)
	$(CC) $(STD) -o main $(OBJS)
main.o : main.cpp
	$(CC) $(STD) -c main.cpp
PVector.o : PVector.cpp
	$(CC) $(STD) -c PVector.cpp
clean : 
	rm *.o