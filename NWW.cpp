#include <iostream>

using namespace std;

unsigned long long int nwd(unsigned long long int a, unsigned long long int b) {
    unsigned long long int pom;

    while (b != 0) {
        pom = a % b;
        a = b;
        b = pom;
    }

    return a;
}

int main() {
    unsigned long long int n, a;
    cin >> n;
    while (n--) {
        cin >> a;
        unsigned long long int tab[a];
        for (unsigned long long int i = 0; i < a; i++) {
            cin >> tab[i];
        }
        unsigned long long int x = tab[0];
        for (unsigned long long int i = 1; i < a; i++) {
            x = (x / nwd(x, tab[i])) * tab[i];
        }
        cout << x << endl;

    }
}
