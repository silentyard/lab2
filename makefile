main: input.o main.o
	g++ -o main input.o main.o

main.o: input.h main.cpp
	g++ -c main.cpp

input.o: input.h input.cpp
	g++ -c input.cpp

clean:
	rm main *.o file.out

