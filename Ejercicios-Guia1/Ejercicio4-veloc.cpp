#include <iostream>
using namespace std;

//Tiempo aproximado de llegada
int main() {

    //Variables
    double dist;
    double velProm;
    double tiempo;

    //Egreso
    cout << "\nIngrese la distancia en Km: " << endl;
    //Ingreso
    cin >> dist;

    //Egreso
    cout << "\nIngrese la velocidad promedio de un auto: " << endl;
    //Ingreso
    cin >> velProm;

    //Proceso
    tiempo = (dist)/(velProm);

    //Egreso
    cout << "El tiempo aproximado en llegar a destino es de: " << tiempo << endl;

}