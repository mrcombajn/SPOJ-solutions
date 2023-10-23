#include <iostream>

using namespace std;

int main() {
    short ile, a, b, c;
    cin >> ile;
    for (int i = 0; i < ile; i++){
        cin >> a >> b;
        c = a;
        while (a % b != 0)
            {
                a = a + c;
            }
            cout << a << endl;
    }

    return 0;
}
