#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	clock_t start, stop;
	start = clock();
	cout << "Dynamiczne przydzielanie pamięci dla tablicy - WSKAZNIK" << endl;
	int rozmiarTablicy;
	int los;
	cout << "Podaj rozmiar tablicy = "; cin >> rozmiarTablicy;
	int* tablica;
	tablica = new int[rozmiarTablicy];
	for (int i = 0; i < rozmiarTablicy; i++) {
		los = rand() % 100 + 1;
		tablica[i] = los;
	}

	for (int i = 0; i < rozmiarTablicy; i++) {
		cout << "Index nr " << i << " = " << tablica[i] << " Adres komorki: " << (int)&tablica[i] << endl;
	}
	stop = clock();
	
	double czaswyswietlaniaaplikacji = (double)(stop - start) / CLOCKS_PER_SEC;
	cout << endl << czaswyswietlaniaaplikacji << endl;
	delete[]tablica;
	return EXIT_SUCCESS;
}
