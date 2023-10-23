#include <iostream>

using namespace std;

int main() {
    int n;
    int segmenty, liczba;
    int wynik = 0;
    cin >> n;
    while (n--) {
        cin >> segmenty;
        int *tab = new int[segmenty];
        for (int i = 0; i < segmenty; i++) {
            cin >> tab[i];
        }
        if (tab[0] != 0) wynik += tab[0];
        if (segmenty > 1) {
            for (int i = 1; i < segmenty; i++) {
                if (tab[i] == 0) wynik++;
                else wynik += tab[i] + 1;
            }
        }
        cout << wynik << endl;
        wynik = 0;
    }
    return 0;
}
