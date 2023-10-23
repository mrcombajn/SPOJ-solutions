#include <iostream>

using namespace std;
int a = 0;

long long int ptcltz(int liczba) {
    if (liczba == 1) return a;
    if (liczba % 2 == 0) {
        a++;
        return ptcltz(liczba / 2);
    } else {
        a++;
        return ptcltz((3 * liczba) + 1);
    }
}

int main() {
    int t, liczba;
    cin >> t;
    while (t--) {
        cin >> liczba;
        cout << ptcltz(liczba) << endl;
        a = 0;
    }
    return 0;
}
