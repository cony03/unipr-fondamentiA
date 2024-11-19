#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Inserisci i tre lati del triangolo : ";
    cin >> a >> b >> c;

    if (a == b && a == c)
        cout << "Equilatero" << endl;
    else if (a == b || b == c || a == c)
        cout << "Isoscele" << endl;
    else
        cout << "Scaleno" << endl;
    

    return 0;
}