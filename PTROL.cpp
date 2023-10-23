#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int *tab = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> tab[i];
        }
        int j = 0;
        while (j != n - 1) {
            swap(tab[j], tab[j + 1]);
            j++;
        }

        for (int i = 0; i < n; i++) {
            cout << tab[i] << " ";
        }
        cout << endl;
    }
    return 0;
}