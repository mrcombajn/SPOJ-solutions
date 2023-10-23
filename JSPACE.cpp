#include <iostream>

using namespace std;

int main() {
    string napis;
    while (cin) {
        getline(cin, napis);
        for (int i = 0; i < napis.length(); i++) {
            if (napis[i] == 32) {
                while (napis[i] == 32) {
                    i++;
                }
                if (napis[i] > 96 && napis[i] < 123)
                    cout << char(napis[i] - 32);
                else
                    cout << napis[i];
            } else {
                cout << napis[i];
            }
        }
        cout << endl;
    }

    return 0;
}
