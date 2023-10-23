#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int a, b, c, wynik;

int main() {
    while (cin >> a >> b >> c) {
        int tab[3] = {a, b, c};
        sort(tab, tab + 3);
        if (((a + b) > c) && ((a + c) > b) && ((b + c) > a) && (a > 0) && (b > 0) && (c > 0)) {
            wynik = (pow(tab[2], 2)) - (pow(tab[1], 2)) - (pow(tab[0], 2));
            if (wynik == 0)
                cout << "prostokatny" << endl;
            else if (wynik > 0)
                cout << "rozwartokatny" << endl;
            else if (wynik < 0)
                cout << "ostrokatny" << endl;
        } else
            cout << "brak" << endl;
    }
    return 0;
}
