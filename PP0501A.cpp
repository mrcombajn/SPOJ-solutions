#include <iostream>

using namespace std;

int main() {
    int ile, a, b;
    cin >> ile;
    for (int i = 0; i < ile; i++) {
        cin >> a >> b;
        while (a != b)
        {
            if (a < b)
                b -= a;
            else
                a -= b;
        }
        cout << a << endl;
    }
    return 0;
}