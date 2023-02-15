#include <iostream>
using namespace std;

//Programa para calcular % de metros cuadrados cubiertos
int main() {

    //Variables
    double supTotal, supCubiert;
    double porcenCubiert, porcentNoCubiert;

    //Egreso
    cout << "\nIngrese la superficie total del predio: ";
    //Ingreso
    cin >> supTotal;
    cout << "===========================================" << endl;

    //Egreso
    cout << "\nIngrese la superficie cubierta del predio: ";
    //Ingreso
    cin >> supCubiert;

    cout << "===========================================" << endl;

    //Proceso
    porcenCubiert = ((supCubiert)/(supTotal))*100;
    porcentNoCubiert = 100 - porcenCubiert;

    //Egreso
    cout << "\nEl porcentaje  de superficie cubierta es del: " << porcenCubiert << " %." << endl;
    cout << "\nEl porcentaje  de superficie descubierta es del: " << porcentNoCubiert << " %." << endl;
    cout << "===========================================" << endl;

}