#include <iostream>

using namespace std;

int main()
{
    int test, wynik, ilosc, liczba;
    cin >> ilosc;
    for (int d = 0; d < ilosc; d++){
        cin >> test;
        wynik = 0;
        for (int i = 0; i < test; i++)
        {
            cin >> liczba;
            wynik += liczba;
        }
        cout << wynik << endl;
    }
    return 0;
}
