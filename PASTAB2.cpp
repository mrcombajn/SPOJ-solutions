#include <iostream>

using namespace std;

int main() {
    int t, liczba;
    char znak;
    cin >> t;
    int *tab = new int[t];
    for (int i = 0; i < t; i++) {
        cin >> tab[i];
    }
    cin >> znak >> liczba;
    if (znak == '>') {
        for (int i = 0; i < t; i++) {
            if (tab[i] > liczba)
                cout << tab[i] << " ";
        }
    } else {
        for (int i = 0; i < t; i++) {
            if (tab[i] < liczba)
                cout << tab[i] << " ";
        }
    }
    return 0;
}
