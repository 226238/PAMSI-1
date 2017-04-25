#include "table.hh"
#include <cstdlib>
#include <ctime>

using namespace std;

table::table()
{
    srand(time(NULL));

    cout << "Podaj ilosc elementow do posortowania: ";
    cin >> rozmiar;

    tab = new int[rozmiar+1];
 
    for (int i = 1 ; i <= rozmiar ; i++)
    {
        tab[i]=(rand()%50)+1;
        //tab[i] = i+1;
       // tab[i] = (rozmiar-i); 
    }
}

void table::wykonaj(int rozmiar_problemu)
{
    for (int i=1;i<=rozmiar;i++)
    {
        cout<<tab[i] << " ";
    }

    cout << endl;

    sort (tab,rozmiar);
 
    for (int i=1;i<=rozmiar;i++)
    {
        cout<<tab[i] << " ";
    }

    cout << endl;
}

 string table::przedstaw_sie()
{
	string nazwa="sortowanie kopcowe";
	return nazwa;
}


void table::heapify (int *tab, int heap_size, int i)
{
    int largest, temp;
    int l = 2*i, r = (2*i)+1;

    if (l <= heap_size && tab[l] > tab[i])
    {
        largest = l;
    }
    else largest = i;

    if (r <= heap_size && tab[r] > tab[largest])
    {
        largest = r;
    }

    if (largest != i)
    {
        temp = tab[largest];
        tab[largest] = tab[i];
        tab[i] = temp;
        heapify(tab,heap_size,largest);
    }
}
    
void table::budkop(int *tab, int rozmiar)
{
    for (int i=rozmiar/2;i>0;i--)
    {
        heapify(tab,rozmiar, i);
    }
}
     
void table::sort(int *tab, int rozmiar)
{
    int temp;
    budkop(tab, rozmiar);

    for (int i=rozmiar;i>1;i--)
    {
        temp=tab[i];
        tab[i]=tab[1];
        tab[1]=temp;
        rozmiar--;
        heapify(tab,rozmiar,1);
    }
}
