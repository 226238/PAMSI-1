#include "itable.hh"
#include "czas.hh"

class table:public itable, public wykonywalny
{
	int *elementy;
	int rozmiar;
	int index;
	public:
	table();
	table(int);
	virtual int size();
	virtual void push(int);
	virtual int pop();
	virtual int top();
	virtual void wykonaj(int rozmiar_problemu);
	virtual string przedstaw_sie();
	int find(int); // funkcja przeszukuje table i zwraca na jakiej pozycji znajduje sięszukana wartosc
	void inicjuj(int); //inicjujemy nasz table wartościami na potrzeby przeprowadzenia testu

};
