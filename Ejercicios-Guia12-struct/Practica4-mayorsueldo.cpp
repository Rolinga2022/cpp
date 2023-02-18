#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

/*Programa: Programa que lea los datos de N cantidad de empleados de una empresa
Los imprima y que luego imprima los datos del empleado con mayor y menor sueldo.
*/

struct datos_Emp {
    char nombre[20];
    double salario;
};



int main(){

    cout << "\n=======================================================" << endl;

    //Variables
    int n;//Variable cantidad de empleados a ingresar sus datos
    datos_Emp empleados[n];

    //Indico cuantos empleados voy a ingresar, es decir, los elementos del vector empleados
    cout << "\nCantidad de empleados: ";
    cin >> n;

    //Ingreso los datos de cada empleado
    for (int i=0; i<n; i++){
        cout << "\nEmpleado " << i+1 << endl;
        cout << "\nNombre: ";
        cin.ignore();
        cin.getline(empleados[i].nombre,20,'\n');
        cout << "\nSalario: ";
        cin >> empleados[i].salario;
        cout << "\n---------------------------------------"<<endl;
    }

    //Muestro el registro de datos
    cout << "\n-=====REGISTRO DE DATOS INGRESADOS====="<<endl;
    for (int i=0; i<n; i++){
        cout << "\nEmpleado "<< i+1 << endl;
        cout << "\n --> Nombre: " << empleados[i].nombre;
        cout << "\n --> Salario: " << empleados[i].salario << endl;
        cout << "\n---------------------------------------"<<endl;
    }

    //Quiero determinar el mayor y el menor de los salarios
    char nombre_Max_Salario[20];
    double max_Salario=0;
    char nombre_Min_Salario[20];
    double min_Salario;
    bool b_min=0;
    for (int i=0; i<n; i++){
        if(empleados[i].salario>max_Salario){
            max_Salario = empleados[i].salario;
            strcpy(nombre_Max_Salario, empleados[i].nombre); 
        }
        if (!b_min){
            min_Salario=empleados[i].salario;
            strcpy(nombre_Min_Salario, empleados[i].nombre); 
            b_min=1;
        } else if (empleados[i].salario<min_Salario) {
            min_Salario=empleados[i].salario;
            strcpy(nombre_Min_Salario, empleados[i].nombre); 
        }
    }

    //Muestro quienes fueron los de mayor y menor salario
    cout << "\n-=====MAYOR Y MENOR SUELDO====="<<endl;
    cout << "\nEl empleado con menor sueldo es '" << nombre_Min_Salario << "', con un sueldo de " << min_Salario << " AR$." << endl;
    cout << "\nEl empleado con mayor sueldo es '" << nombre_Max_Salario << "', con un sueldo de " << max_Salario << " AR$." << endl;
    cout << "\n---------------------------------------"<<endl;
}