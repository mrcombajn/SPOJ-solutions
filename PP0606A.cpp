#include <iostream>
#include <cmath>
#include <stack>

using namespace std;

int main() {
    int t, ile;
    cin >> t;
    while (t--) {
        cin >> ile;
        long double max = 0;
        string litera[ile];
        int a[ile], b[ile];
        long double tab[ile][2];
        bool czy[ile];
        stack<long double> stos;
        for (int i = 0; i < ile; i++) {
            cin >> litera[i] >> a[i] >> b[i];
            tab[i][0] = sqrt(pow((0 - a[i]), 2) + pow((0 - b[i]), 2));
            tab[i][1] = i;
        }
        int licznik = 0;
        int pom;
        for (int i = 0; i < ile; i++) czy[i] = 0;
        while (licznik != ile) {
            for (int i = 0; i < ile; i++) {
                if (tab[i][0] >= max && czy[i] != 1) {
                    max = tab[i][0];
                    pom = i;
                }

            }
            czy[pom] = 1;
            stos.push(tab[pom][1]);
            max = 0;
            ++licznik;
        }
        int x;
        for (int i = 0; i < ile; i++) {
            x = stos.top();
            stos.pop();
            cout << litera[x] << " " << a[x] << " " << b[x] << endl;
        }
    }

    return 0;
}
