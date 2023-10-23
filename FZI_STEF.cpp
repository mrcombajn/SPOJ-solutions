#include <iostream>

using namespace std;

int main() {
    int t, liczba;
    long long wynik = 0, maks = 0, pom = 0;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> liczba;
        wynik += liczba;
        if (wynik > maks) {
            maks = wynik;
        }
        if (wynik < 0)
            wynik = 0;

    }
    cout << maks << endl;
    return 0;
}
