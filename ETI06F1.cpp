#include <iostream>
#include <cmath>
#include<iomanip>

using namespace std;

int main() {
    double  r, d,x;
    while(cin >> r >> d)
    {
        x = (sqrt((pow(r, 2)-pow((d / 2), 2))));
        x *= x * M_PI;
        cout << setprecision(2) << fixed << x << endl;
    }

    return 0;
}