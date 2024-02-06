#include <iostream>
using namespace std;


float Suma(float a, float b){
	return a+b;
}
	
int Suma(int a, int b){
	return a+b;
}

float Suma(float a, int b){
	return a+b;
}

float Suma(int a, float b){
	return a+b;
}

int main() {
  float a;
	float b;
  cout << "Podaj pierwsza liczba: "; cin >> a || b;
  cout << "Podaj druga liczbe: "; cin >> b || a;
  cout << "Suma liczb: " << Suma(a, b) << endl;
  system("pause");
  return 0;
}
