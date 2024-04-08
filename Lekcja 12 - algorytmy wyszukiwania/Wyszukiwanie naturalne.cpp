#include <iostream>
using namespace std;

int main () {
	int tab[30]={8,51,13,49,39,42,24,34,40,9,48,25,44,32,16,23,32,51,53,30,37,14,54,37,19,24,11,99,47,74};
	int	Liczby[30];
	int szukana;
	int index = 0;
	
	
	cout << "Szukana liczba: ";
	cin >> szukana;
	
	for(int a=0; a<<sizeof(tab); a++){
		if(tab[a]==szukana){
			Liczby[index]= a;
			index++;
		}
	}
	
	cout << "Poszukiwana liczba znajduje sie na pozycji: " << endl;
	for (int a=0; a <index; a++){
		cout << Liczby[a] << ", ";
	}
	
	

}