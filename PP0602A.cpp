#include <iostream>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int *tab = new int[n];
        for (int i = 0; i < n; i++)
            cin >> tab[i];
        for (int i = 0; i < n; i++) {
            if (i % 2 != 0)
                cout << tab[i] << " ";
        }
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)
                cout << tab[i] << " ";
        }
        cout << endl;
    }
    return 0;
}