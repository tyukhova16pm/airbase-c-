all: airbase

airbase: deladd.o main.o overload.o search.o loadlist.o menu.o priceisnice.o
	g++ deladd.o main.o overload.o search.o loadlist.o menu.o priceisnice.o -o airbase

deladd.o:
	g++ -c deladd.cpp -o deladd.o

main.o:
	g++ -c main.cpp -o main.o

overload.o:
	g++ -c overload.cpp -o overload.o

search.o:
	g++ -c search.cpp -o search.o

loadlist.cpp:
	g++ -c loadlist.cpp -o loadlist.o

menu.cpp:
	g++ -c menu.cpp -o menu.o

priceisnice.cpp:
	g++ -c priceisnice.cpp -o priceisnice.o

clean:
	rm -rf deladd.o main.o overload.o search.o loadlist.o menu.o priceisnice.o airbase
