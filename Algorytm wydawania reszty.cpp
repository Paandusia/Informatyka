#include <iostream>

using namespace std;

int main(){

int Nominaly[9]={500, 200, 100, 50, 20, 10, 5, 2, 1};

int Kwota,P, i;

cout << "Podaj reszte do wyplacenia: ";
cin >> Kwota;

i=0;

while (Kwota>0){

    if (Kwota >= Nominaly[i]){

        P=Kwota / Nominaly[i];

        Kwota-= Nominaly[i]*P;

        cout << Nominaly[i] << " x " << P << endl;
    }
i++;
}

return 0;
}
