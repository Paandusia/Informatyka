#include <iostream>

using namespace std;

struct kot{
	string tytul;
	string autor;
	int rok;
	string wydawnictwo;
	float cena;
};

int main(){
	kot Ksiegarnia [7];
	{
		{ "Tytul1", "autor1", 1925, "Helion1", 23.54 },
    	{ "Tytul2", "autor2", 1926, "Helion2", 24.54 },
    	{ "Tytul3", "autor1", 1927, "Helion3", 25.54 },
    	{ "Tytul4", "autor2", 1928, "Helion1", 26.54 },
    	{ "Tytul5", "autor1", 1921, "Helion2", 27.54 },
    	{ "Tytul6", "autor2", 1930, "Helion3", 28.54 },
    	{ "Tytul7", "autor1", 1931, "Helion1", 29.54 },
	};
	
}
