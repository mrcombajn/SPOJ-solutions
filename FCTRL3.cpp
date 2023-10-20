#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--) {
        int c = 1, n;
        int silnia [] = {1,1,2,6,24,20,20,40,20,80,00};

        cin >> n;
        if(n > 10)
            n = 10;

        std::cout << silnia[n] / 10 << " " << silnia[n] % 10 << std::endl;
    }
    return 0;
}
