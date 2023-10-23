#include <iostream>

using namespace std;

int main() {
    int ile, wynik = 0;
    string ciag;
    string dzialanie;
    cin >> ile;
    for (int i = 0; i < ile; i++) {
        cin >> ciag;
        wynik += ciag[0] - 48;
        for (int j = 1; j < ciag.length(); j++) {
            if (ciag[j] == '+') {
                wynik += ciag[j + 1] - 48;
            }

            if (ciag[j] == '-') {
                wynik -= ciag[j + 1] - 48;

            }

        }
        cout << wynik << endl;
        wynik = 0;
    }

    return 0;
}
