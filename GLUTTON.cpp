#include <iostream>

using namespace std;

int main() {
    int t, ilosc, pudelko, ciastko, wynik=0, czas, x;
    cin >> t;
    while (t--) {
        cin >> ilosc >> pudelko;
        while (ilosc--) {
            cin >> czas;
            ciastko = 86400 / czas;
            wynik += ciastko;
        }
        x = wynik / pudelko;
        if (wynik % pudelko>0)
            x++;
        cout << x << endl;
        wynik = 0;
    }
    return 0;
}