#include <iostream>

using namespace std;

int main() {
    char znak;
    int a, b, wynik;
    while (cin >> znak >> a >> b) {
        if (znak == '+')
            wynik = a + b;
        else if (znak == '-')
            wynik = a - b;
        else if (znak == '/')
            wynik = a / b;
        else if (znak == '*')
            wynik = a * b;
        else if (znak == '%')
            wynik = a % b;
        cout << wynik << endl;
    }
    return 0;
}