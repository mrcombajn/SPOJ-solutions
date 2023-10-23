#include <iostream>

using namespace std;

int main() {
    int t;
    long long wynik = 0, x = 0;
    while (cin >> t) {
        wynik += t;
        if (t == 0) {
            x += wynik;
            cout << wynik << endl;
            wynik = 0;
        }
    }
    cout << x << endl;
    return 0;
}
