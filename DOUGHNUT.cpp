#include <iostream>

using namespace std;

int main() {
    int t, waga, paczek, koty;
    cin >> t;
    while (t--) {
        cin >> koty >> waga >> paczek;
        if ((koty * paczek) <= waga)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}