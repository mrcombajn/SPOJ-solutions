#include<iostream>

using namespace std;

string SZYFR(string klucz, string wyraz) {
    int j = 0;
    for (int i = 0; i < klucz.length(); i++)
        klucz[i] -= 48;
    for (int i = 0; i < wyraz.length(); i++) {
        if (j != klucz.length()) {
            if (wyraz[i] != 91) {
                wyraz[i] += klucz[j];
                j++;
            } else
                wyraz[i] = 65;
        } else {

            j = 0;

            if (wyraz[i] != 91) {
                wyraz[i] += klucz[j];
                j++;
            } else
                wyraz[i] = 65;
        }
    }
    return wyraz;
}

string DESZYFR(string klucz, string wyraz) {
    int j = 0;
    for (int i = 0; i < klucz.length(); i++)
        klucz[i] -= 48;
    for (int i = 0; i < wyraz.length(); i++) {
        if (j != klucz.length()) {
            if (wyraz[i] != 64) {
                wyraz[i] -= klucz[j];
                j++;
            } else
                wyraz[i] = 90;
        } else {
            j = 0;
            if (wyraz[i] != 64) {
                wyraz[i] -= klucz[j];
                j++;
            } else
                wyraz[i] = 90;
        }
    }
    return wyraz;
}

int main() {
    string corobic, klucz, wyraz;
    while (cin >> corobic >> klucz >> wyraz) {
        if (corobic == "SZYFRUJ")
            cout << SZYFR(klucz, wyraz) << endl;
        else
            cout << DESZYFR(klucz, wyraz) << endl;
    }
    return 0;
}
