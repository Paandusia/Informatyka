#include <iostream>

using namespace std;

int main (){
	
	int wysokosc, szerokosc;
	cout << "Podaj wysokosc: ";
	cin >> wysokosc;
	cout << "Podaj szerokosc: ";
	cin >> szerokosc;
	
	//petla zagniezdzona
		for (int i = 0; i < wysokosc; i = i+1){
			
		
			for (int j = 1; j < szerokosc; j = j+1){
				cout << "*";
			}
		}
	
	

cout << endl;

}
