#include <iostream>

using namespace std;

int main() {
    int ilosc_testow, ile;
    float srednia = 0, min = 1000, pom, liczba;
    cin >> ilosc_testow;
    while (ilosc_testow--) {
        cin >> ile;
        int *tab = new int[ile];
        for (int i = 0; i < ile; i++) {
            cin >> liczba;
            srednia += liczba;
            tab[i] = liczba;
        }
        srednia /= ile;

        for (int i = 0; i < ile; i++) {
            if (srednia - tab[i] < 0) pom = (srednia - tab[i]) * (-1);
            else pom = srednia - tab[i];
            if (pom < min && pom != min) {
                min = pom;
                liczba = tab[i];
            }
        }
        cout << liczba << endl;
        srednia = 0;
        min = 1000;
    }
    return 0;
}
