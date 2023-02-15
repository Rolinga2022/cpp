#include <iostream>
using namespace std;

//Programa que emite la condicion de un alumno segun sus notas
int main(){

    cout << "\n==========================================" << endl;

    //Variables
    float p1, p2;//notas parciales

    //Egreso
    cout << "\nIngrese la nota del primer parcial (0 - 10): ";
    //Ingreso 
    cin >> p1;

    //Egreso
    cout << "\nIngrese la nota del segundo parcial (0 - 10): ";
    //Ingreso 
    cin >> p2;

    cout << "\n==========================================" << endl;

    //Condicion (uso de concatenacion)
    if (p1>=6 && p1<8 && p2>=6 && p2<8) {
        cout << "\nDebe rendir examen final." << endl;
    } else if (p1>=8 && p2>=8) {
        cout << "\nAprobación directa." << endl;
    } else {
        cout << "\nDebe recuperar." << endl;
    }

    cout << "\n==========================================" << endl;

}