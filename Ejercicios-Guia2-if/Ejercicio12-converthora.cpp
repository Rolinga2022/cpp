#include <iostream>
using namespace std;

int main() {

    cout << "\n========================================" << endl;

    //Variables
    float time;

    //Egreso
    cout << "\nIngrese el tiempo en minutos: ";
    //Ingreso
    cin >> time;

    cout << "\n========================================" << endl;

    //Condicion
    if (time > 60) {
        time /= 60;
        cout << "\nEl tiempo ingresado fue de: " << time << " horas." << endl;
    } else {
        //Egreso
        cout << "\nEl tiempo ingresado fue de: " << time << " minutos" << endl;
    }
    cout << "\n========================================" << endl;

}