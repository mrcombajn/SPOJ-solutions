#include <iostream>

using namespace std;

int main() {
    int a = 0, x, n, z;
    while (cin >> x >> n) {
        while (n--) {
            cin >> z;
            if (z == x) {
                a++;
            }
        }
        cout << a << endl;
        a = 0;
    }
    return 0;
}