output: main.o creature.o menu.o blue.o barbarian.o harry.o medusa.o vampire.o dice.o
	g++ main.o creature.o menu.o blue.o barbarian.o harry.o medusa.o vampire.o dice.o -o output

main.o: main.cpp
	g++ -c main.cpp

creature.o: creature.cpp creature.hpp
	g++ -c creature.cpp

menu.o: menu.cpp menu.hpp
	g++ -c menu.cpp

blue.o: blue.cpp blue.hpp
	g++ -c blue.cpp

barbarian.o: barbarian.cpp barbarian.hpp
	g++ -c barbarian.cpp

harry.o: harry.cpp harry.hpp
	g++ -c harry.cpp

medusa.o: medusa.cpp medusa.hpp
	g++ -c medusa.cpp

vampire.o: vampire.cpp vampire.hpp
	g++ -c vampire.cpp

dice.o: dice.cpp dice.hpp
	g++ -c dice.cpp
