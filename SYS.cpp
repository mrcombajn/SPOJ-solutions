#include <iostream>
#include <algorithm>

using namespace std;

string dectohex(int liczba) {
    string liczbyhex = "";
    while (liczba != 0) {
        if (liczba % 16 < 10) {
            liczbyhex += (char) (liczba % 16 + 48);
        } else
            liczbyhex += (char) (liczba % 16 + 55);
        liczba /= 16;
    }
    reverse(liczbyhex.begin(), liczbyhex.end());
    return liczbyhex;
}

string dectojed(int liczba) {
    string liczbyjed = "";
    while (liczba != 0) {
        if (liczba % 11 < 10) {
            liczbyjed += (char) (liczba % 11 + 48);
        } else
            liczbyjed += (char) (liczba % 11 + 55);
        liczba /= 11;
    }
    reverse(liczbyjed.begin(), liczbyjed.end());
    return liczbyjed;
}

int main() {
    int t, liczba;
    cin >> t;
    while (t--) {
        cin >> liczba;
        cout << dectohex(liczba) << " " << dectojed(liczba) << endl;
    }
    return 0;
}
