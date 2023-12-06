#include <iostream>
using namespace std;

int main() {
	
	int tablica [5];
	
	
	for(int i = 0; i < 5; i++){
		cin >>  tablica[i];
	}
		
	
	
	for(int i = 0; i <5; i++){	
	cout << "Liczby parzyste: ";
	cin >> i;
	do{
		cout << i;
		i /=2;
	}while (i>0);
	
	
}
	
	


	return 0;
}