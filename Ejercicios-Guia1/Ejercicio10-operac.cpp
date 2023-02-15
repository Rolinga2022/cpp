#include <iostream>
using namespace std;

int main() {

    //Variables
    double a, b, suma, resta, prod, div;

    cout << "\n===========================================" << endl;

    cout << "\nIngrese un numero: ";
    cin >> a;
    cout << "\nIngrese otro numero (menor que el primero): ";
    cin >> b;

    cout << "\n===========================================" << endl;

    //Proceso
    suma = a + b;
    resta = a - b;
    prod = a * b;
    div = a/b ;

    //Egreso

    cout << "\nLa suma del primer numero y el segundo es igual a: " << suma << endl;
    cout << "\nLa resta del primer numero y el segundo es igual a: " << resta << endl;
    cout << "\nEl producto del primer numero con el segundo es igual a: " << prod << endl;
    cout << "\nLa division del primer numero con el segundo es igual a: " << div << endl;
    cout << "\n===========================================" << endl;

}