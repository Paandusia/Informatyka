#include <iostream>

using namespace std;

int main(){
	
	int n;
	int k=2;
	
	cout << "Podaj liczbe: ";
	cin >> n;
	
	cout << "Czynniki pierwsze liczby : " << n << endl;
	
	
	while(n > 1){
		
		while (n % k == 0){
			
			cout << k << " ";
			
			n /= k;
		}
		++k;
		
	}	
	
	return 0;
}

