#include <iostream>
using namespace std;

int main(){
	int n = 3;
	int *wsk = &n;
	
	cout << "Zawartosc wskaznika wsk: 3" << endl;
	
	cout << "Adres zmiennej n: " << wsk << endl;
	
	cout << "Adres zmiennej n: " << &n << endl;
	
	return 0;
}