#include <iostream>
using namespace std;
//struktura dla u¿ytkowników forum
struct DDT //deklaracja struktury
{
    //opis struktury
    string nick1, nick2, nick3;
    string haslo1, haslo2, haslo3;
    string status;
    string rodzaj_konta;
};

int main()
{
    //Tworzenie obiektu struktury
    DDT Uzytkownicy[ 3 ];
    cout << "Wprowadz dane.\n";
    //wprowadzenie 3 uzytkowników
    for( short licz = 0; licz < 3; licz++ ) {
        cout << "Podaj nick 1 uzytkownika: ";
        cin >> Uzytkownicy[ licz ].nick1;
        cout << "Podaj haslo 1 uzytkownika: ";
        cin >> Uzytkownicy[ licz ].haslo1;
        cout << "Podaj nick 2 uzytkownika: ";
        cin >> Uzytkownicy[ licz ].nick2;
        cout << "Podaj haslo 2 uzytkownika: ";
        cin >> Uzytkownicy[ licz ].haslo2;
		cout << "Podaj nick 3 uzytkownika: ";
        cin >> Uzytkownicy[ licz ].nick3;
        cout << "Podaj haslo 3 uzytkownika: ";
        cin >> Uzytkownicy[ licz ].haslo3;
    }
    //wyswietlanie wprowadzonych danych
    cout << endl
    << "Oto rezultat wprowadzonych danych:"
    << endl;
    for( short licz = 0; licz < 3; licz++ ) {
        cout << "Uzytkownik " << licz + 1
        << "\tNick: " << Uzytkownicy[ licz ].nick1
        << "\tHaslo: " << Uzytkownicy[ licz ].haslo1
         << "\tNick: " << Uzytkownicy[ licz ].nick2
        << "\tHaslo: " << Uzytkownicy[ licz ].haslo2
         << "\tNick: " << Uzytkownicy[ licz ].nick3
        << "\tHaslo: " << Uzytkownicy[ licz ].haslo3
        << endl;
    }
   
    cin.get();
    return(0);
}