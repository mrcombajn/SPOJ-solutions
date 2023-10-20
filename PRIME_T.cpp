#include <iostream>

using namespace std;

int main(){
    int ile, liczba, x=0;

    cin >> ile;
    for (int i = 0; i < ile; i++) {
        cin >> liczba;

        for (int i = 1; i <= liczba; i++) {
            if(liczba%i==0){
                x++;
            }
        }

        if((x == 2 || x == 1) && liczba != 1)
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
        x = 0;
    }
    return 0;
}

//Sprawdź, które spośród danych liczb są liczbami pierwszymi
//Check which of these numbers are prime numbers