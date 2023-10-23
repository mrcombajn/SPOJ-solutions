#include <iostream>

using namespace std;

int main() {
    short n, m;
    cin >> m >> n;
    int tab[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> tab[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << tab[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
