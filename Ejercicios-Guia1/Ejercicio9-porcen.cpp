#include <iostream>
using namespace std;

//Porcentaje de hombres(h) y mujeres(m) en un establecimiento
int main () {

    //Variables
    float m, h;
    float total;
    float porcentMujer, porcentHombre;

    cout << "\n===========================================" << endl;

    cout << "\nIngrese la cantidad de MUJERES que asisten: ";//Egreso
    cin >> m;//Ingreso

    cout << "\nIngrese la cantidad de HOMBRES que asisten: ";
    cin >> h;

    cout << "\n===========================================" << endl;

    //Proceso
    total = m + h;
    porcentMujer = ((m)/total)*100;
    porcentHombre = 100 - porcentMujer;

    //Egreso
    cout << "\nEl porcentaje de MUJERES que asisten es del: " << porcentMujer << " %." << endl;
    cout << "\nEl porcentaje de HOMBRES que asisten es del: " << porcentHombre << " %." << endl;
    cout << "\n===========================================" << endl;
}