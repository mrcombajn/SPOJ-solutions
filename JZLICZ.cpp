#include <iostream>

using namespace std;
int tab[123];

int main() {
    int a, b;
    string napis;
    cin >> a;
    for (int j = 0; j <= a; j++) {
        getline(cin, napis);
        for (int i = 0; i < napis.length(); i++)
            tab[napis[i]]++;
    }
    for (int i = 97; i < 123; i++) {
        if (tab[i] != 0)
            cout << char(i) << " " << tab[i] << endl;
    }
    for (int i = 65; i < 91; i++) {
        if (tab[i] != 0)
            cout << char(i) << " " << tab[i] << endl;

    }
    return 0;

}