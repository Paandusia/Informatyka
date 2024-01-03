#include<iostream>
using namespace std;
 
 
int main() {
    char tablica[100];
    cout << "Podaj imie i nazwisko: "; 
    cin.getline(tablica, 100);
 
 
    int pozycja_spacji = 0;
    while (tablica[pozycja_spacji] != ' ' && tablica[pozycja_spacji] != '\0') {
        pozycja_spacji++;
    }
 
 
    int pozycja_konca = pozycja_spacji;
    while (tablica[pozycja_konca] != '\0') {
        pozycja_konca++;
    }
 
 
    cout << "Twoje dane osobowe: " << tablica << endl;
    cout << "Pozycja spacji: " << pozycja_spacji << endl;
    cout << "Pozycja konca: " << pozycja_konca << endl;
 
 
    return 0;
}