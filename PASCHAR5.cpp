#include<iostream>

using namespace std;

string rot(string napis) {
    for (int i = 0; i < napis.length(); i++) {
        if ((napis[i] > 64 && napis[i] < 91) || (napis[i] > 96 && napis[i] < 123)) {
            for (int j = 0; j < 13; j++) {
                if (napis[i] == 90 && (napis[i] > 64 && napis[i] < 91)) {
                    napis[i] = 65;
                } else if (napis[i] == 122 && (napis[i] > 96 && napis[i] < 123)) {
                    napis[i] = 97;
                } else
                    napis[i]++;
            }
        }
        if (napis[i] > 47 && napis[i] < 58) {
            for (int j = 0; j < 5; j++)
                if (napis[i] == 57)
                    napis[i] = 48;
                else
                    napis[i]++;
        }
    }
    return napis;
}

int main() {
    string napis;
    while (getline(cin, napis)) {
        cout << rot(napis) << endl;
    }
    return 0;
}
