#include <iostream>

using namespace std;

bool f(string z) {
    int s = 0;
    for (int i = 0; i < z.length(); i++) {
        s += z[i] - 48;
    }
    if (s % 3 == 0) return 1;
    else return 0;

}

int main() {
    string liczba;
    int x;
    while (cin >> liczba && (liczba[0] - 48) != 0) {
        x = liczba.length() - 1;
        if (f(liczba) && (liczba[x] == '0' || liczba[x] == '5')) cout << "TAK" << endl;
        else cout << "NIE" << endl;
    }

    return 0;
}
