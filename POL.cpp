#include <iostream>

using namespace std;

int main() {
    string wyraz;
    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> wyraz;
        for (int j = 0; j < wyraz.length() / 2; j++) {
            cout << wyraz[j];
        }
        cout << endl;
    }
    return 0;
}