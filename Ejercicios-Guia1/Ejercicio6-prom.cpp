#include <iostream>
using namespace std;

//Programa para calcular el promedio de 3 notas trimestrales
int main(){

    cout << "===========================================" << endl;
    
    //Variables
    double nota1, nota2, nota3, suma, promedio;

    //Egreso
    cout << "\nIngrese la nota final del PRIMER trimestre: ";
    //Ingreso
    cin >> nota1;

    //Egreso
    cout << "\nIngrese la nota final del SEGUNDO trimestre: ";
    //Ingreso
    cin >> nota2;

    //Egreso
    cout << "\nIngrese la nota final del TERCER trimestre: ";
    //Ingreso
    cin >> nota3;

    cout << "===========================================" << endl;

    //Proceso
    promedio = (nota1 + nota2 + nota3)/3;

    //Egreso
    cout << "El promedio final es: " << promedio << endl;

}