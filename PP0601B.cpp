#include <iostream>

using namespace std;

int main() {
    int t, n, y, x;
    cin >> t;
    while (t--) {
        cin >> n >> x >> y;
        for (int i = x; i < n; i++) {
            if (i % x == 0 && i % y != 0)
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}