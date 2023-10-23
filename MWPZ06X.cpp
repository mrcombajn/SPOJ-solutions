#include <iostream>

using namespace std;

int main() {
    double test, a;
    cin >> test;
    while (test--) {
        a = 0;
        cin >> a;
        a *= a;
        cout << a << endl;
    }
    return 0;
}
