#include <iostream>
using namespace std;

int main() {
    int b;
    cout << "Quante bottiglie vuoi acquistare: ";
    cin >> b;

    float totale = b * 15;
    if (b > 50)
        totale = totale - (totale * 0.18);

    cout << "Prezzo totale: " << totale << endl;

    return 0;
}