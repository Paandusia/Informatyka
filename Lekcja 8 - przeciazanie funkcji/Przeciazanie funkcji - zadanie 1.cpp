#include <iostream>
using namespace std;

int Suma(int a, int b){
	return a+b;
}

float Suma(float c, float d){
	return c+d;
}

int main(){
	int a,b;
	float c,d;
	char wybor;
	
	cout << "1- Liczby calkowite" << endl;
	cout << "2- Liczby zmiennoprzecinkowe" << endl;
	cin >> wybor;
	
	switch(wybor){
		case '1':
			cout << "Podaj dwie liczy calkowite: "; cin>>a >>b;
			cout << "Suma liczb calkowitych: " <<Suma(a,b) <<endl;
			break;
			
		case '2':
			cout << "Podaj dwie liczy zmiennoprzecinkowe: "; cin>>c >>d;
			cout << "Suma liczb zmiennoprzecinkowych: " <<Suma(c,d) <<endl;
			break;
		
	}
	return 0;
		
}