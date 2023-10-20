#include <iostream>

using namespace std;

int main() {
    string napis;

    int n, size = 1;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> napis;
        int stringSize = napis.size();
        for (int j = 0; j < stringSize; j++) {

            if (napis[j] == napis[j + 1]){
                ++size;
            }

            if (napis[j] != napis[j + 1]){
                if (size > 2) {
                    cout<< napis[j] << size;
                }
                else {
                    for(int k = 0; k < size; k++)
                        cout << napis[j];
                }
                size = 1;
            }
        }
        cout << endl;
    }

    return 0;
}