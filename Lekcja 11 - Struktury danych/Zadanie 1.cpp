#include <iostream>
using namespace std;

//wprowadzenie danych nazwa, waga(gram), wiek (tygodnie),

//struct_zwierzeta_DDT{
//	string nazwa;
//	string waga (gram);
//	string wiek (tygodnie);
//};

 //int main(){
	//zwierzeta_DDT krowa = {
	
	//	"Krowa",
	//	10,
	//	20,
	//};
	
	//zwierzeta_DDT koza = {
	
	//	"Koza",
	//	10.6,
	//	15,
	//};
	
	//zwierzeta_DDT kura = {
	
	//	"Kura",
	//	2.8,
	//	4,
	//};
	
	//zwierzeta_DDT pies = {
	
	//	"Pies",
	//	13.4,
	//	35,
	//};
	
	//zwierzeta_DDT swinia = {
	
	//	"Swinia",
	//	12.75,
	//	8
	//};
	
	
//}}



struct lol {
	string nazwa;
	string waga;
	string wiek;
};

int main(){
	 lol Zwierzeta[5];
	cout <<"Wprowadz dane zwierzat: " << endl;
	for (int a = 0; a < 5; a++){
		cout<< "Nazwa: ";
		cin >> Zwierzeta[a].nazwa;
		cout << "Waga(gram): ";
		cin >> Zwierzeta[a].waga;
		cout << "Wiek(tygodnie): ";
		cin >> Zwierzeta[a].wiek;	
	}
	
	
	cout << endl; 
	cout << "Wprowadzone zwierzeta: " << endl;
	for (int a = 0; a < 5; a++){
		cout << "Zwierze nr " << a + 1
		<< "\tNazwa: " << Zwierzeta[a].nazwa
		<< "\tWaga: " << Zwierzeta[a].waga
		<< "\tWiek: " << Zwierzeta[a].wiek
		<< endl;
	}
	
	cin.get();
	return(0);
}

