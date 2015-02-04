#include<iostream>
#include <iomanip>
using namespace std;

void unos(int[][4]);
int utakmica(int[][4]);
float prosjecna(int[], int);

/*
--------- Zadatak 1. ---------
   --- Parcijalni ispit ---
   ---------- PR1 ---------
	  	   27.01.2015.
------------------------------
*/

int main()
{
	int m[5][4], n;
	unos(m);

	cout << "\n Utakmica na kojoj je postignuto najmanje poena je: " << utakmica(m) << endl;
	do {
		cout << "\n Za kojeg igraca zelite izracunati prosjecan broj poena: ";
		cin >> n;
	} while (n<0 || n >= 5);
	cout << "\n Rezultat je " << setprecision(2) << prosjecna(m[n], 4) << endl;

	system("pause>null");
	return 0;
}

void unos(int m[][4])
{
	for (int i = 0; i < 4; i++)
	{
		cout << "Unesite postignute poene u " << i + 1 << " utakmici:  \n"; 
		for (int j = 0; j < 5; j++)
		{
			cout << "  - za igraca " << j+1 << ". : ";
			cin >> m[j][i];
		}
	}

}

int utakmica(int niz[][4]) {
	int poeni = INT_MAX, brojUtakmice = 1;
	for (int i = 0; i<4; i++) {
		int suma = 0;
		for (int j = 0; j<5; j++){
			suma += niz[j][i];
		}
		if (suma<poeni){
			poeni = suma;
			brojUtakmice = i + 1;
		}
	}
	return brojUtakmice;
}

float prosjecna(int m[], int k)
{
	int s = 0;
	for (int j = 0; j < k; j++)
	{
		s += m[j];

	}

	return (s / 4.0);
}