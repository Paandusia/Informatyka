#include <iostream>
using namespace std;

/*
void mn (float *li, float *kk, float *jj){
	*li+=1;
	*kk+=2;
	*jj+=3;
}
*/
void mm (float *li, int a){
	*li +=a;	
}



int main(){
	float a=1;
	float b=1;
	float c=1;
	
	float *wsk = &a;
	float *wks = &b;
	float *ksw = &c;
	
	cout << "Wartosci zmiennych:" << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;
	
	cout << "Wartosci zmiennych po modyfikacji: " << endl;
	//mn(wsk, wks, ksw);
	mm(wsk, 1);
	cout << "a: " << *wsk << endl;
	mm(wks, 2);
	cout << "b: " << *wks << endl;
	mm(ksw,3);
	cout << "c: " << *ksw << endl;
	
	return 0;
}