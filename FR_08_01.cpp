#include <iostream>

using namespace std;

bool czy(string z) {
    for (int i = 0; i < z.length(); i++) {
        if ((z[i] - 48) % 2 == 0) return 1;
    }
    return 0;
}

int main() {
    string napis;
    cin >> napis;
    if (czy(napis)) cout << "Tak" << endl;
    else cout << "Nie" << endl;

    return 0;
}
