#include <iostream>

using namespace std;

int kabal(string x) {
    int wynik = 0;
    int pom = 1, pom2;
    for (int i = 0; i < x.length(); i++) {
        if (x[i] > 96 && x[i] < 106)
            wynik += x[i] - 96;
        else if (x[i] > 106 && x[i] < 116) {
            pom2 = 107;
            while (pom2 != x[i]) {
                pom++;
                pom2++;
            }
            wynik += pom * 10;
            pom = 1;
        } else {
            if (x[i] == 116)
                wynik += 100;
            else if (x[i] == 118)
                wynik += 2 * 100;
            else if (x[i] == 120)
                wynik += 3 * 100;
            else if (x[i] == 121)
                wynik += 4 * 100;
            else if (x[i] == 122)
                wynik += 5 * 100;
        }
    }
    return wynik;
}

int main() {
    string napis;
    while (cin >> napis) {
        cout << kabal(napis) << endl;
    }
    return 0;
}