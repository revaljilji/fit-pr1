#include<iostream>
using namespace std;

int sati(int &);
int dani(int &);

/*
--------- Zadatak 3. ---------
   --- Parcijalni ispit ---
   ---------- PR1 ---------
	  	   27.01.2015.
------------------------------ 
*/

int main() 
{
	int broj;

	cout << "\n Unesite broj u minutama: ";
	do {
		cin >> broj;
	} while (broj <= 0);

	cout << "\n Unijeli ste " << dani(broj) << " dana ";
	cout << sati(broj) << " sati ";
	cout << " i " << broj<< " minuta! \n";

	system("pause>null");
	return 0;
}

int sati(int &br) {
	int priv = br / 60;
	br = br % 60;

	return priv;
}

int dani(int &br) {
	int priv = br / (60 * 24);
	br = br % (60 * 24);

	return priv;
}