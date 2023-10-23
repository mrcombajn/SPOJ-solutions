#include <iostream>

using namespace std;

int main() {
    char znak;
    int d, p, wynik;
    int tab[10];
    while (cin >> znak >> p >> d) {
        if (znak == 'z') {
            tab[p] = d;
        } else {
            if (znak == '+')
                wynik = tab[p] + tab[d];
            else if (znak == '-')
                wynik = tab[p] - tab[d];
            else if (znak == '*')
                wynik = tab[p] * tab[d];
            else if (znak == '/')
                wynik = tab[p] / tab[d];
            else if (znak == '%')
                wynik = tab[p] % tab[d];
            cout << wynik << endl;
        }
    }

    return 0;
}