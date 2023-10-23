#include <iostream>

using namespace std;

int main() {
    int t;
    int a = 1;
    cin >> t;
    int tab[t + 1];
    int b = t;
    if (t != 2 && t != 1 && t != 0) {
        for (int i = 0; i <= t; i++) {
            if (i == t - 1) cout << "0" << " ";
            else if (i % 2 == 0) {
                cout << a << " ";
                a++;
            } else if (i % 2 != 0) {
                cout << b << " ";
                b--;
            }
        }
    } else if (t == 0) cout << t << endl;
    else {
        cout << "NIE" << endl;
    }

    return 0;
}
