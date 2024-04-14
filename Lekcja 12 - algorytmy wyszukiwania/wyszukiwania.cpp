#include <iostream>
using namespace std;

int main()
{
	int tab[31] = {49, 82, 71, 14, 97, 43, 56, 56, 82, 28, 23, 38, 15, 76, 12, 85, 1, 24, 40, 0, 29, 65, 67, 89, 0, 71, 59, 48, 43, 38, 71};
	int liczby [31];
	int index = 0;

	int szukana;
	cout << "Jaka liczbe poszukujesz: ";
	cin >> szukana;
	cout << "Poszukiwana liczba znajduje sie na pozycji: " << endl;
	for(int a=0; a <= 31; a++){
		if (tab[a] == szukana){
			cout << a << ", ";
		}
	}
}
