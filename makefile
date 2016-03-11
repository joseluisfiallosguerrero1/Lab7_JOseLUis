Juego.exe: main.o racional.o
	g++ main.o racional.o 
main.o: main.cpp racional.h
	g++ -c main.cpp 
racional.o: racional.h racional.cpp
	g++ -c racional.cpp	
