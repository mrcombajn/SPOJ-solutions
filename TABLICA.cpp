#include <iostream>

using namespace std;

int main() {
    int tab[100], d = 0;
    while (cin >> tab[d]) {
        d++;
    }
    for (int i = d; i > 0; i--) {
        cout << tab[i - 1] << " ";
    }
    cout << endl;
    return 0;
}
