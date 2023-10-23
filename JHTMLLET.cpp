#include <iostream>

using namespace std;

int main() {
    string napis;
    while (getline(cin, napis)) {
        for (int i = 0; i < napis.length(); i++) {
            if (napis[i] == '<') {
                while (napis[i] != '>') {
                    if (napis[i] > 96 && napis[i] < 123) {
                        cout << char(napis[i] - 32);
                    } else
                        cout << napis[i];
                    i++;
                    if (napis[i] == '>')
                        cout << napis[i];
                }
            } else
                cout << napis[i];
            if (i == napis.length() - 1) {
                cout << endl;
            }
        }
    }
    return 0;
}