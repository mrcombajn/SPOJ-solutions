#include <iostream>

using namespace std;

int main() {
    int t, n;
    int liczba[100];

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        for (int j = 0; j < n; j++){
            cin >> liczba[j];
        }
        for (int j = n - 1; j >= 0; j--){
            cout << liczba[j] << " ";
        }
    }
    return 0;
}