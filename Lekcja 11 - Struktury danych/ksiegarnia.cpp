#include <iostream>
using namespace std;

struct Ksiazka {
    string tytul;
    string autor;
    int rok;
    string wydawnictwo;
    float cena;
};

Ksiazka ksiazki[7] = {
    { "Tytul1", "autor1", 1925, "Helion1", 23.54 },
    { "Tytul2", "autor2", 1926, "Helion2", 24.54 },
    { "Tytul3", "autor1", 1927, "Helion3", 25.54 },
    { "Tytul4", "autor2", 1928, "Helion1", 26.54 },
    { "Tytul5", "autor1", 1921, "Helion2", 27.54 },
    { "Tytul6", "autor2", 1930, "Helion3", 28.54 },
    { "Tytul7", "autor1", 1931, "Helion1", 29.54 }
};

void wyszukajPoRoku(Ksiazka* ksiazki, int ilosc, int* rok) {
    cout << "Znalezione ksiazki: " << endl;
    for (int a = 0; a < ilosc; ++a) {
        if (ksiazki[a].rok >= *rok) {
            cout << "Tytul: " << ksiazki[a].tytul << " Autor: " << ksiazki[a].autor << " Rok: " << ksiazki[a].rok << " Wydawnictwo: " << ksiazki[a].wydawnictwo << " Cena: " << ksiazki[a].cena << endl;
        }
    }
};


void wyszukajPoCenie(Ksiazka* ksiazki, int ilosc, float* cena) {
    cout << "Znalezione ksiazki: " << endl;
    for (int a = 0; a < ilosc; ++a) {
        if (ksiazki[a].cena > *cena) {
            cout << " Tytul: " << ksiazki[a].tytul << " Autor: " << ksiazki[a].autor << " Rok: " << ksiazki[a].rok << " Wydawnictwo: " << ksiazki[a].wydawnictwo << " Cena: " << ksiazki[a].cena << endl;
        }
    }
}


void wyszukajPoWydawnictwie(Ksiazka* ksiazki, int ilosc, string* wydawnictwo) {
    cout << "Znalezione ksiazki: " << endl;
    for (int a = 0; a < ilosc; ++a) {
        if (ksiazki[a].wydawnictwo == *wydawnictwo) {
            cout << " Tytul: " << ksiazki[a].tytul << " Autor: " << ksiazki[a].autor << " Rok: " << ksiazki[a].rok << " Wydawnictwo: " << ksiazki[a].wydawnictwo << " Cena: " << ksiazki[a].cena << endl;
        }
    }
}


int main() {
    int wybor;
    do {
        cout << "Witaj w ksiegarnii "<< endl;
        cout << "Po jakiej kategorii chcial bys wyszukac ksiazke: " << endl;
        cout << "1. Rok wydania" << endl;
        cout << "2. Cena" << endl;
        cout << "3. Wydawnictwo" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wybor;

        switch (wybor) {

            case 1: {
                int rok;
                cout << "Podaj od jakiego roku chcesz zobaczyc ksiazki: ";
                cin >> rok;
                wyszukajPoRoku(ksiazki, 7, &rok);
                break;
            }

            case 2: {
                float cena;
                cout << "Podaj cene, powyzej ktorej chcesz zobaczyc ksiazki: ";
                cin >> cena;
                wyszukajPoCenie(ksiazki, 7, &cena);
                break;
            }

            case 3: {
                string wydawnictwo;
                cout << "Podaj nazwe wydawnictwa: ";
                cin >> wydawnictwo;
                wyszukajPoWydawnictwie(ksiazki, 7, &wydawnictwo);
                break;
            }
        }
    } while (wybor != 0);

    return 0;
}
