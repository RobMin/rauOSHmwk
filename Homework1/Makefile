CXX = g++
CXXFLAGS = -Wall -g

all: main

main: main.o Complex.o
	$(CXX) $(CXXFLAGS) main.o Complex.o -o main

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

Complex.o: Complex.cpp
	$(CXX) $(CXXFLAGS) -c Complex.cpp -o Complex.o

clean:
	rm *.o main
