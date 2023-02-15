#include <iostream>
using namespace std;

//Programa: que registre los datos de tres personas como: Nombre, apellido, edad, sexo y teléfono.

//creo la estructura persona

struct persona {
    char nombre[30];
    char apellido[30];
    char sexo[15];
    int edad;
    int telefono;
};

int main() {

    persona intimas[3];//Este es un vector de tres elementos. Dichos elementos guardan los datos de cada persona (datos de la estructura)

    for (int i=0; i<3; i++){

        cout << "\nPERSONA " << i+1 << endl;

        cout << "\nIngrese el nombre: ";
        cin >> intimas[i].nombre;

        cout << "\nIngrese el apellido: ";
        cin >> intimas[i].apellido;

        cout << "\nIngrese el sexo: ";
        cin >> intimas[i].sexo;

        cout << "\nIngrese edad: ";
        cin >> intimas[i].edad;
        cout << "\nIngrese telefono: ";

        cin >> intimas[i].telefono;
        cout << "\n----------------------------------" << endl;
    }

    cout << "\nEl registro de personas fue: " << endl;

    for (int i=0; i<3; i++){
        cout << "\t\t" << intimas[i].nombre;
        cout << "\t\t" << intimas[i].apellido;
        cout << "\t\t" << intimas[i].sexo;
        cout << "\t\t" << intimas[i].edad;
        cout << "\t\t" << intimas[i].telefono << "\n\n";
    }
}