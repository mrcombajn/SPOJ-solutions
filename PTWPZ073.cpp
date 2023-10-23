#include <iostream>

using namespace std;

int main() {
    int ilosc_zestawow;
    string ciag;
    string wynik = "";
    int pom;
    cin >> ilosc_zestawow;
    while (ilosc_zestawow--) {
        cin >> ciag;
        for (int i = 0; i < ciag.length(); i++) {
            if (ciag[i] > 64 && ciag[i] < 68) wynik += '2';
            else if (ciag[i] > 67 && ciag[i] < 71) wynik += '3';
            else if (ciag[i] > 70 && ciag[i] < 74) wynik += '4';
            else if (ciag[i] > 73 && ciag[i] < 77) wynik += '5';
            else if (ciag[i] > 76 && ciag[i] < 80) wynik += '6';
            else if (ciag[i] > 79 && ciag[i] < 84) wynik += '7';
            else if (ciag[i] > 83 && ciag[i] < 87) wynik += '8';
            else if (ciag[i] > 86 && ciag[i] < 91) wynik += '9';

        }
        cout << wynik << endl;
        wynik = "";

    }
    return 0;
}
