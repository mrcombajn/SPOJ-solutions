#include <iostream>

using namespace std;

int main() {
    int a, b, x;
    string napis;

    while (getline(cin, napis)) {
        a = 0;
        b = 0;
        x = napis.length();
        for (int i = 0; i < x; i++) {
            if (napis[i] == ' ') {
                if (napis[i - 1] < 58)
                    a++;
                else
                    b++;
            }
        }
        if (napis[x - 1] > 58)
            b++;
        else
            a++;
        cout << a << ' ' << b << endl;
    }
    return 0;
}
