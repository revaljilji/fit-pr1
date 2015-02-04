#include <iostream>
#include <iomanip>
using namespace std;

/* 
  --------- Zadatak 1. ---------
     --- Integralni ispit ---
	 ---------- PR1 ---------
	        27.01.2015.
   ------------------------------
*/

void unos(int[]);
void ispis(int[][4]);
int igrac(int[][4]);
float prosjecna(int[][4], int);

int main()
{
	int nMat[5][4], utak;

	cout << "Unesi podatke...\n";
	for (int i = 0; i < 5; i++)
	{
		cout << " ... za igraca br. " << i+1 << ":\n";
		unos(nMat[i]);
		cout << endl;
			
	}
	cout << "\n Igrac br. " << igrac(nMat) << " je postigao najvise nula na utakmicama." << endl;

	cout << "\n Izaberi utakmicu (1-4) za koju hoces da vidis prosjek: \n";
		do {
			cin >> utak;
		} while (utak < 1 || utak >4);
		cout << "\nProsjecan broj poena : " << setprecision(2) << prosjecna(nMat, utak) << endl;

		cout << "To je to, hvala sto ste koristili program :P" << endl;
	system("pause>0");
	return 0;
}

void unos(int mat[]) {
	for (int j = 0; j < 4; j++) {
		cout << "Utakmica " << j + 1 << ": ";
		cin >> mat[j];
		if (mat[j] < 0) j--;
	}
}

int igrac(int mat[][4]) {

	int maxSpavo=0, ig = 0;
	for (int i = 0; i < 5; i++)
	{
		int spavo = 0;
		for (int j = 0; j < 4; j++) {
			if (mat[i][j] == 0)
				spavo++;
		}
		if (spavo >= maxSpavo) { // zadnji u matrici
			ig = i + 1;
			maxSpavo = spavo;
		}
	}

	return ig;
}

float prosjecna(int mat[][4], int ut) {

	int pros = 0;
	for (int j = 0; j < 5; j++) {
		pros += mat[j][(ut-1)];
	}
	return (pros/4.0);
}