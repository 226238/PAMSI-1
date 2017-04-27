#include "itable.hh"
#include "czas.hh"

class table: public itable, public wykonywalny
{
	int *tab;
	int rozmiar;
	
public:

	table();

	virtual void wykonaj(int rozmiar_problemu);
	virtual string przedstaw_sie();

 	void heapify (int *tab, int heap_size, int i);
    void budkop(int *tab, int rozmiar);
    void sort(int *tab, int rozmiar);

};
