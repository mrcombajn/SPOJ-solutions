#include <iostream>

using namespace std;

int main() {
    unsigned long long max = 0, srednia, liczba;
    while (cin >> liczba && liczba != 0) {
        if (liczba > max) {
            srednia = max;
            max = liczba;
        }
        if (liczba < max && liczba > srednia) {
            srednia = liczba;
        }
    }
    if (srednia != 0)
        cout << srednia << endl;
    else
        cout << max << endl;
    return 0;
}