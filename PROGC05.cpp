#include <iostream>

using namespace std;

int main() {
    string wyraz;
    char litera;
    while (cin >> litera >> wyraz) {
        for (int i = 0; i < wyraz.length(); i++) {
            if (wyraz[i] != litera)
                cout << wyraz[i];
        }
        cout << endl;
    }
    return 0;
}