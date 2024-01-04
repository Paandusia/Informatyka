#include <iostream>
using namespace std;

int main (){
	float liczba1;
	cout << "Podaj liczbe: ";
	cin >> liczba1;
	
	float liczba2;
	cout << "Podaj druga liczbe: ";
	cin >> liczba2;
	
	char znak;
	cout << "Podaj jeden operator arytmetyczny (+, -, *, / ): ";
	cin >> znak;
	
	
	switch (znak){
		
	case '+':
		cout <<"Wynik: " << liczba1 + liczba2;
		break;
		
	case '-':
		cout <<"Wynik: " << liczba1 - liczba2;
		break;	
		
	case '*':
		cout <<"Wynik: " << liczba1 * liczba2;
		break;
		
	case '/':
		cout <<"Wynik: " << liczba1 / liczba2;
		break;	
	
	}
	
	
	return 0;
}