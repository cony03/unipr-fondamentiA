#include <iostream>
using namespace std;
#define PI 3.1415 // macro

int main() {
    float x, areaQuadrato, perimetroQuadrato, circonferenzaCerchio, areaCerchio;
    cout << "Immetti un numero" <<endl;
    cin >> x;
    areaQuadrato = x * x;
    perimetroQuadrato = x * 4;
    circonferenzaCerchio = (x + x) * PI;
    areaCerchio = PI * (x * x);

    cout << "L'area del quadrato e' " << areaQuadrato << endl << "Il perimetro del quadrato e' " << perimetroQuadrato << endl << "La circonferensa del cerchio e' di " << circonferenzaCerchio << endl << "L'area del cerchio e' di " <<areaCerchio;
    return 0;
}