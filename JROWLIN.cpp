#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long double a, b, c, wynik;
    while (cin >> a >> b >> c) {
        if (a == 0 && b != c)
            cout << "BR" << endl;
        else if (b == c)
            cout << "NWR" << endl;
        else {
            wynik = (c - b) / a;
            cout << setprecision(2) << fixed << wynik << endl;
        }
    }
    return 0;
}