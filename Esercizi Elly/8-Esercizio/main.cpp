#include <iostream>
using namespace std;
#define MIGLIA 0.621371;

int main() {
    float km;

    cout << "Calcolo km -> miglia, quanti km devi fare?";
    cin >> km;

    float conversione = km * MIGLIA;

    cout << km << "km In miglia sono: " << conversione;


    return 0;
}