#include <iostream>

using namespace std;

struct kot{
	string tytul;
	string autor;
	int rok;
	string wydawnictwo;
	float cena;
};

//void szukanieRok (rok){
	
//}

int main(){
	kot Ksiegarnia [7]{
		{ "Tytul1", "autor1", 1925, "Helion1", 23.54 },
    	{ "Tytul2", "autor2", 1926, "Helion2", 24.54 },
    	{ "Tytul3", "autor1", 1927, "Helion3", 25.54 },
    	{ "Tytul4", "autor2", 1928, "Helion1", 26.54 },
    	{ "Tytul5", "autor1", 1921, "Helion2", 27.54 },
    	{ "Tytul6", "autor2", 1930, "Helion3", 28.54 },
    	{ "Tytul7", "autor1", 1931, "Helion1", 29.54 },
	};
	
	cout << "\tWitaj w ksiegarnii" << endl;;
	//cout << "1. Rok wydania" << ;
	//cout << "2. Cena" << ;
	//cout << "3. Wydawnictwo" << ;
	//cout << "0. Wyjscie" << ;
	
	
	cout << "\tPo jakiej kategorii chcial bys wyszukac ksiazke: " << endl;
		for (int nwm=0; nwm < 7; nwm++){
			cout << "1. Rok wydania" << Ksiegarnia[nwm].rok;
			cout << "2. Cena" << Ksiegarnia[nwm].cena;
			cout << "3. Wydawnictwo" <<  Ksiegarnia[nwm].wydawnictwo;
		//	cout << "0. Wyjscie" << Ksiegarnia[nwm].;
	int wybor;
	switch (wybor){
		case 1:
			cout << "\t1. Rok wydania";
			cin >> Ksiegarnia[nwm].rok;
			break;
		case 2:
			cout << "\t2. Cena";
			cin >> Ksiegarnia[nwm].cena;    
			break;
		case 3:
			cout << "\t3. Wydawnictwo";
			cin >> Ksiegarnia[nwm].wydawnictwo;
			break;
		//case 0:
		//	cout << "0. Wyjscie";
		//	cin >>
		}
	}
	
	
	cin.get();
	return 0;
}
