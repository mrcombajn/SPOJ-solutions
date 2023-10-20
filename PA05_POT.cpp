#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    short D;

    cin >> D;
    while (D--){
        cin >> a >> b;
            a %= 10;
        	if (b % 4 == 1)
                b=1;
            else if(b % 4 == 0)
                b = 4;
            else if (b % 4 == 2)
                b = 2;
            else if (b % 4 == 3)
                b=3;
            a = pow(a,b);

            a %= 10;
            cout << a << endl;
        }

return 0;
}
