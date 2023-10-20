#include <iostream>
#include <cstring>

using namespace std;

string string_merge(string a, string b){
    int m;
    string napis = "";

    if(a.length() > b.length()) m = b.length();
    else m = a.length();
    for (int i = 0; i < m; i++){
        napis += a[i];
        napis += b[i];
    }
    return napis;
}

int main(){
    int t, n;
    string S1, S2;
    string S;
    cin >> t; /* wczytaj liczbę testów */
    while (t--){
        cin >> S1 >> S2;
        S = string_merge(S1,S2);
        cout << S << endl;
    }
    return 0;
}