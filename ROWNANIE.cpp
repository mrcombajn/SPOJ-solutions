#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    while (cin >> a >> b >> c) {
        double delta;
        delta = b * b - 4 * a * c;
        if (delta < 0)
            cout << "0" << endl;
        if (delta == 0)
            cout << "1" << endl;
        else if (delta > 0)
            cout << "2" << endl;
    }
    return 0;
}