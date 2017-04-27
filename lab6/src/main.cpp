#include <iostream>
#include <ctime>
#include "table.hh"
using namespace std;

#define ILOSC_POWTORZEN 1
#define ROZMIAR_PROBLEMU 1

int main()
{
    unsigned int ilosc_powtorzen = ILOSC_POWTORZEN;
    unsigned int rozmiar_problemu = ROZMIAR_PROBLEMU;
    czas t;
    table obj;
    t.wykonaj_algorytm(ilosc_powtorzen, obj, rozmiar_problemu);
    return 0;
}
