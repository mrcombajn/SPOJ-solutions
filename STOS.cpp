#include <iostream>
#include <stack>

using namespace std;

int main() {
    int z = 0, liczba;
    char znak;
    stack<int> stos;
    while (cin >> znak) {
        if (znak == '+') {
            if (z != 10) {
                cin >> liczba;
                stos.push(liczba);
                cout << ":)" << endl;
                z++;
            } else
                cout << ":(" << endl;

        }
        if (znak == '-') {
            if (z != 0) {
                cout << stos.top() << endl;
                stos.pop();
                z--;
            } else
                cout << ":(" << endl;
        }
    }
    return 0;
}