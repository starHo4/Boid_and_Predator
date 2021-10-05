OBJS = main.o PVector.o Simulation.o
CC = g++
STD = -std=c++17
SFML = -lsfml-graphics -lsfml-window -lsfml-system

all : main clean

main : $(OBJS)
	$(CC) $(STD) -o main $(OBJS) $(SFML)
main.o : main.cpp
	$(CC) $(STD) -c main.cpp
PVector.o : PVector.cpp
	$(CC) $(STD) -c PVector.cpp
Simulation.o : Simulation.cpp
	$(CC) $(STD) -c Simulation.cpp
clean : 
	rm *.o