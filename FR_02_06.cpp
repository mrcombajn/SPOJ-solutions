#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int t;
    float x, y, z;
    cin >> t;
    string imiona[t];
    int *wynik = new int[t];
    for (int i = 0; i < t; i++) {
        cin >> imiona[i] >> x >> y;
        y /= 100;
        z = x / pow(y, 2);
        if (z < 18.5)
            wynik[i] = 0;
        else if (z >= 18.5 && z < 25)
            wynik[i] = 1;
        else if (z > 25)
            wynik[i] = 2;
    }
    cout << "niedowaga" << endl;
    for (int i = 0; i < t; i++) {
        if (wynik[i] == 0)
            cout << imiona[i] << endl;
    }
    cout << "wartosc prawidlowa" << endl;
    for (int i = 0; i < t; i++) {
        if (wynik[i] == 1)
            cout << imiona[i] << endl;
    }
    cout << "nadwaga" << endl;
    for (int i = 0; i < t; i++) {
        if (wynik[i] == 2)
            cout << imiona[i] << endl;
    }
    return 0;
}