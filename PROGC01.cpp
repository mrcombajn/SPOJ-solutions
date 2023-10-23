#include <iostream>

using namespace std;

int main() {
    string napis;
    int i = 0;
    while (getline(cin, napis)) {
        i++;
    }
    cout << i << endl;
    return 0;
}
