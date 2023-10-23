#include <iostream>

using namespace std;

int main() {
    string napis;
    while (getline(cin, napis)) {
        for (int i = 0; i < napis.length(); i++) {
            if (napis[i] > 64 && napis[i] < 91) {
                for (int j = 0; j < 3; j++) {
                    napis[i]++;
                    if (napis[i] > 90) {
                        napis[i] = 65;
                    }
                }
            }
        }
        for (int i = 0; i < napis.length(); i++) {
            cout << napis[i];
        }
        cout << endl;
    }
    return 0;
}