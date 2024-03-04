#include <iostream>
using namespace std;

long long ilo(int n);

int main()
{
    int n;
	
	cout << "Podaj liczbe: ";
	cin >> n;
	
	cout << "Iloczyn " << n << " kolejnych liczb naturalnych wynosi " << ilo(n) << endl;

	return 0;
}

long long ilo(int n){
	if(n<1) 
		return 1;
	
	return n*ilo(n-1);
}
