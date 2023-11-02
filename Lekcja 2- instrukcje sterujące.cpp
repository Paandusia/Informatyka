#include <iostream>
using namespace std;

int main(){
	
	// liczby calkowite - short, int, long, long long, unsigned short
	// do liczb zmiennoprzecinkowcyh - float, double 
	// ciag znaków - string
	
	short a, b;
	cout <<"Podaj liczbe 1 : ";
	cin >> a;
	cout <<"Podaj liczbe 2 : ";
	cin >> b;
	
	// instrukcja warunkowa - if(warunek)
	
	if(a > b){
		cout << a << " > " << b; // cout << zmienna << "tekst" << zmienna;
		
	}
	
	// = operator przypisania
	// == operator porowania
	// <= mniejsze lub rowne
	// != nie rowne czemus
	
	else if(a == b){
		cout <<  a << " == " << b;
	}

	else{
		cout << a << " < " << b;
	}
	
	
cout <<endl;
system("pause");
}