CC := g++
FLAGS := -Wall -O2 -std=c++11 -g

all:
	@echo "Compile programm"
	$(CC) $(FLAGS) dz_2_1.cpp -o dz_2_1
	$(CC) $(FLAGS) dz_2_2.cpp -o dz_2_2


	
	