#include <iostream>

using namespace std;

int main() {
    string napis, wynik = "";
    int i = 0;
    while (getline(cin, napis)) {
        while (i < napis.length()) {
            if (napis[i] == '?' && napis[i + 1] == '?') {
                if (napis[i + 2] == 61) wynik += '#';
                else if (napis[i + 2] == 47) wynik += char(92);
                else if (napis[i + 2] == 39)wynik += '^';
                else if (napis[i + 2] == 40)wynik += '[';
                else if (napis[i + 2] == 41)wynik += ']';
                else if (napis[i + 2] == 124)wynik += '|';
                else if (napis[i + 2] == 60)wynik += '{';
                else if (napis[i + 2] == 62)wynik += '}';
                else if (napis[i + 2] == 45)wynik += '~';
                i += 3;
            } else {
                wynik += napis[i];
                i++;
                if (napis[i] == 32)wynik += " ";

            }
        }
        i = 0;
        cout << wynik << endl;
        wynik = "";
    }


    return 0;
}
