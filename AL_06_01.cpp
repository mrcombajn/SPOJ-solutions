#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    float a, b, r;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (a > 0) {
            r = (int) a % (int) b;
        } else {
            if (b > 0) {
                r = a - b * floor(a / b);
            } else {
                r = a + b * floor(a / (-b));
            }
        }
        cout << r << endl;
    }
    return 0;
}