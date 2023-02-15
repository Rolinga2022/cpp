#include <iostream>
using namespace std;

int main(){

    const string nombre="Rodrigo";//creo variable constante

    int edad {30};

    double salario;

    cout << "Introduce el salario del empleado: " << endl;

    cin >> salario;//para introducir por teclado un valor en la variable salario

    cout << "Introduce la edad del empleado: " << endl;

    cin  >> edad;

    cout << "------------------" << endl;

    cout << "Datos del empleado: " << endl;

    cout << "Nombre: " << nombre <<". Edad: " << edad << ". Salario: " << salario << endl;


}