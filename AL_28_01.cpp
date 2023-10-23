#include <iostream>

using namespace std;

int main() {
    int t, pom;
    string napis;
    cin >> t >> napis;
    pom = (t / 2) + 1;
    int pocz = (t - 1) / 2, koniec = (t - 1) / 2;
    while (pom--) {
        string wyjscie = "";
        for (int i = 0; i < t; i++) {
            if (i >= pocz && i <= koniec) {
                wyjscie += napis[i];
            } else
                wyjscie += '.';
        }
        pocz--;
        koniec++;
        cout << wyjscie << endl;
    }
    return 0;
}
