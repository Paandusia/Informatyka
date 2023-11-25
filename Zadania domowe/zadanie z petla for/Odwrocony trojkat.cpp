#include <iostream>

using namespace std;

int main()
{
    int szerokosc, wysokosc;

    cout << "Podaj szerokosc: ";
    cin >> szerokosc;

    cout << "Podaj wysokosc: ";
    cin >> wysokosc;

    for (int i = 0; i < wysokosc; i = i + 1){
        for(int j = 0; j < i; j = j + 1){
            cout << " ";
        }

        for (int a = 0; a < 2 * (wysokosc - i) - 1; a = a + 1){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
