#include <iostream>

using namespace std;

int main() {
    string haslo, wynik = "";
    int pom, mnoznik;
    while (cin >> haslo) {
        for (int i = 0; i < haslo.length(); i = i + 2) {
            pom = haslo[i] - 65;
            mnoznik = (haslo[i + 1] - 65) * 16;
            wynik += char(pom + mnoznik);
        }
        cout << wynik << endl;
        wynik = "";
    }

    return 0;
}
