__start__: a.out
	./a.out

a.out: main.o czas.o tablicao1.o tablicax2.o table.o
	g++ -Wall -pedantic main.o czas.o tablicao1.o tablicax2.o table.o
obj/main.o: main.cpp lista.hh
	g++ -c -Wall -pedantic main.cpp
obj/tablicao1.o: tablicao1.hh wykonywalny.hh tablicao1.cpp
	g++ -c -Wall -pedantic tablicao1.cpp
obj/tablicax2.o: tablicax2.hh tablicao1.hh tablicax2.cpp
	g++ -c -Wall -pedantic tablicax2.cpp
obj/czas.o: czas.hh tablicax2.hh czas.cpp
	g++ -c -Wall -pedantic czas.cpp
obj/table.o: table.hh itable.hh czas.hh table.cpp
	g++ -c -Wall -pedantic table.cpp

clean:	
	rm  -f *.o test
