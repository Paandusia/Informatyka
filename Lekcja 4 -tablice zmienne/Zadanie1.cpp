#include <iostream>
using namespace std;

int main() {
	
	int tablica [5];
	
	 
	cout << "Wprowadz liczby: ";
	
	for(int i = 0; i < 5; i++){
		cin >>  tablica[i];
	}
		
	
	
	for(int i = 0; i <5; i++){
	 if(tablica[i] /2 == 0) cout << "Liczby parzyste: ";
	}
	
	

	return 0;
}