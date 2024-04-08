#include <iostream>
using namespace std;

struct ksiazki{
	string tytul;
	string autor;
	int rok;
	string wydawnictwo;
	float cena;
}

ksiazki [7]={
		{ "Tytul1", "autor1", 1925, "Helion1", 23.54 },
    	{ "Tytul2", "autor2", 1926, "Helion2", 24.54 },
    	{ "Tytul3", "autor1", 1927, "Helion3", 25.54 },
    	{ "Tytul4", "autor2", 1928, "Helion1", 26.54 },
    	{ "Tytul5", "autor1", 1921, "Helion2", 27.54 },
    	{ "Tytul6", "autor2", 1930, "Helion3", 28.54 },
    	{ "Tytul7", "autor1", 1931, "Helion1", 29.54 },
};


	
int main(){
	short wrok;
	float wcena;
	string wwydawnictwo;
	
	int wybor;
	
	cout << "Witaj w ksiegarnii" << endl;
	cout << "Po jakiej kategorii chcial bys wyszukac ksiazke: " << endl;
	cout << "1. Rok wydania" << endl;
	cout << "2. Cena" << endl;
	cout << "3. Wydawnictwo" << endl;
	cout << "0. Wyjscie" << endl;
	cin >> wybor;
	
//	switch (wybor){
//		case 1:
//			cout << "Podaj od jakiego roku chcesz zobaczyc ksiazki: ";
//			cin >> wrok;
//			for(int a=0; a<7; a++){
//				if (ksiazki[a].rok >= wrok){
//				cout << ksiazki[a].tytul << "   "; 
//	                cout << ksiazki[a].autor << "   "; 
//                	cout << ksiazki[a].rok << "   " ;
//                	cout << ksiazki[a].wydawnictwo << "   " ;
//                	cout << ksiazki[a].cena << "   " << endl;
//				}
//			}
//			break;
//		case 2:
//			cout << "Podaj od jakiej ceny chcesz zobaczyc ksiazki: ";
//			cin >> wcena;
//			for(int a=0;a<7;a++){
//				if (ksiazki[a].cena >= wcena){
//					cout << ksiazki[a].tytul << "   "; 
//	                cout << ksiazki[a].autor << "   "; 
//                	cout << ksiazki[a].rok << "   "; 
//                	cout << ksiazki[a].wydawnictwo << "   "; 
//                	cout << ksiazki[a].cena << "   " << endl;
//				}
//			}
//			break;
//		case 3:
//			cout << "Podaj od jakiego wydawnictwa chcesz zobaczyc ksiazki: ";
//			cin >> wwydawnictwo;
//			for(int a=0; a<7; a++){ 
//            	if (ksiazki[a].wydawnictwo == wwydawnictwo){ 
//                cout << ksiazki[a].tytul << "   "; 
//                cout << ksiazki[a].autor << "   "; 
//                cout << ksiazki[a].rok << "   "; 
//                cout << ksiazki[a].wydawnictwo << "   "; 
//                cout << ksiazki[a].cena << "  " << endl; 
//            	}  
//        	} 
//			break;
//			
//		case 0:
//			cout << "Zla odpowiedz";
//			break;
//		}
	
void funkcja(short wrok, float wcena, string wwydawnictwo){
//	short wrok;
//	float wcena;
//	string wwydawnictwo;
		
	int wybor;
		
	switch (wybor){
		case 1:
			cout << "Podaj od jakiego roku chcesz zobaczyc ksiazki: ";
			cin >> wrok;
			for(int a=0; a<7; a++){
				if (ksiazki[a].rok >= wrok){
					cout << ksiazki[a].tytul << "   "; 
	                cout << ksiazki[a].autor << "   "; 
                	cout << ksiazki[a].rok << "   " ;
                	cout << ksiazki[a].wydawnictwo << "   " ;
                	cout << ksiazki[a].cena << "   " << endl;
				}
			}
			break;
		case 2:
			cout << "Podaj od jakiej ceny chcesz zobaczyc ksiazki: ";
			cin >> wcena;
			for(int a=0;a<7;a++){
				if (ksiazki[a].cena >= wcena){
					cout << ksiazki[a].tytul << "   "; 
	                cout << ksiazki[a].autor << "   "; 
                	cout << ksiazki[a].rok << "   "; 
                	cout << ksiazki[a].wydawnictwo << "   "; 
                	cout << ksiazki[a].cena << "   " << endl;
				}
			}
			break;
		case 3:
			cout << "Podaj od jakiego wydawnictwa chcesz zobaczyc ksiazki: ";
			cin >> wwydawnictwo;
			for(int a=0; a<7; a++){ 
            	if (ksiazki[a].wydawnictwo == wwydawnictwo){ 
                cout << ksiazki[a].tytul << "   "; 
                cout << ksiazki[a].autor << "   "; 
                cout << ksiazki[a].rok << "   "; 
                cout << ksiazki[a].wydawnictwo << "   "; 
                cout << ksiazki[a].cena << "  " << endl; 
            	}  
        	} 
			break;
			
		case 0:
			cout << "Zla odpowiedz";
			break;
		}
	return;
	
	}
}


