#include <iostream>
using namespace std;

/*Programa: solicita informacion de tres empleados utilizando dos estructuras.
La primera cuanta con informaciion de la direccion : direccion, ciudad, provincia.
La segunda cuenta con informacion del empleado: nombre, info de la direccion, salario.
Luego imprimi por pantalla los registros
EN ESTE CASO, LA ESTRUCTURA INFODIRECCION ESTA ANIDADA A LA ESTRUCTURA EMPLEADO
*/

//La primera
struct info_Direccion {
    char direccion[30];
    char ciudad[30];
    char provincia[30];
};

struct empleado {
    char nombre[30];
    info_Direccion dir_Empleado;
    double salario;
};


int main (){
    
    cout << "\n================================" << endl;

    empleado datos_Empleados[3];

    for(int i=0; i<3; i++){
        cout << "\nEmpleado " << i+1 << endl;
        cout << "\nNombre: ";
        cin.ignore();//Lo coloco para que ignore el salto de linea del cin anterior para que pueda compilar
        cin.getline(datos_Empleados[i].nombre,30, '\n');
        cout << "Direccion: ";
        cin.getline(datos_Empleados[i].dir_Empleado.direccion,30, '\n');
        cout << "Ciudad: ";
        cin.getline(datos_Empleados[i].dir_Empleado.ciudad,30, '\n');
        cout << "Provincia: ";
        cin.getline(datos_Empleados[i].dir_Empleado.provincia,30, '\n');
        cout << "Salario (AR$): ";
        cin >> datos_Empleados[i].salario;
        cout << "\n-------------------------------" << endl;
    }

    cout << "\n========REGISTRO DE DATOS========" << endl;
    for (int i=0; i<3; i++){
        cout << "\t" << datos_Empleados[i].nombre;
        cout << "\t" << datos_Empleados[i].dir_Empleado.direccion;
        cout << "\t" << datos_Empleados[i].dir_Empleado.ciudad;
        cout << "\t" << datos_Empleados[i].dir_Empleado.provincia;
        cout << "\t" << datos_Empleados[i].salario << "\n\n";
    }
}