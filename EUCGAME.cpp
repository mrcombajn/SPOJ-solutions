#include <iostream>

using namespace std;

int main() {
    short t;
    int a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        while (a != b) {
            if (a > b)
                a -= b;
            else
                b -= a;
        }
        cout << a + b << endl;
    }
    return 0;
}