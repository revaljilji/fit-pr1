#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
const int p = 5;
void unos(char[], int);
char zadnje(char[], int);
void promjeni(char[], int[], int);
 
int main()
{
        char m[p];
        int n[p];
        cout << "Unesite clanove niza: " << endl;
        unos(m, p);
        cout << endl;
        cout << "Zadnje slovo po abecednom poretku je: ";
        cout<<zadnje(m, p);
        cout << endl << endl;
        cout << "Unesena slova promjenja u odgovarajuce brojeve prema ASCII kodnoj semi: " << endl;
        promjeni(m, n, p);
        system("pause>null");
        return 0;
}
 
void unos(char m[], int p)
{
        for (int i = 0; i < p; i++)
        {
 
                cin >> m[i];
                if (m[i]<'a' || m[i]>'z'){
                        cout << "Ponovite unos, uneseni karakter nije malo slovo!" << endl;
                        i--;
                }
        }
}
 
char zadnje(char m[], int p)
{
        char pom = 'A';
        for (int i = 0; i < p; i++)
        {
                if ((m[i]>'A' && m[i]<'Z') || (m[i]>'a'&&m[i] < 'z'))
                {
                        if (m[i] > pom)
                                pom = m[i];
                }
        }
 
        return pom;
}
 
void promjeni(char m[], int n[], int p)
{
        for (int i = 0; i < p; i++)
        {
                n[i] = int(m[i]);
                cout << m[i]<<"="<<n[i];
                cout << endl;
        }
}
