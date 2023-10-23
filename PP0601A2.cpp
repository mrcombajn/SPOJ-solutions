#include <iostream>

using namespace std;

int main() {
    int a, b = 0, c = 0, x = 0;
    while (cin >> a) {
        cout << a << endl;
        if (c != 0) {
            if (a == 42) {
                if (c != a) {
                    b++;
                }
                if (b == 3) {
                    break;
                }
            }
        }
        c = a;
    }
    return 0;
}
