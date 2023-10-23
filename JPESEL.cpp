#include<iostream>

using namespace std;

int main() {
    int t, wynik = 0;
    string pesel;
    cin >> t;
    while (t--) {
        cin >> pesel;
        for (int i = 0; i < pesel.length(); i++) {
            pesel[i] -= 48;
        }
        for (int i = 0; i < pesel.length(); i++) {
            if (i == 0 || i == 4 || i == 8 || i == 10)
                wynik += pesel[i];
            else if (i == 1 || i == 5 || i == 9)
                wynik += pesel[i] * 3;
            else if (i == 2 || i == 6)
                wynik += pesel[i] * 7;
            else if (i == 3 || i == 7)
                wynik += pesel[i] * 9;
        }

        if (wynik % 10 == 0) {
            cout << "D" << endl;
        } else
            cout << "N" << endl;
        wynik = 0;

    }
    return 0;
}
