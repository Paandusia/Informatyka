#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	srand(time(NULL));
	// 50 - ile liczb w przedziale
	// 7 - startowa liczba
	int wylosowana_liczba = (rand() % 50) + 7; // zapisanie wyniku losowania do zmiennej
	for (int i = 0; i <= 10; i++) {
		cout << (rand() % 50) + 7 << endl;
	}

}