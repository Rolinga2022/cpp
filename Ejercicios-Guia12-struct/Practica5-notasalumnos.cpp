#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

/*Programa: dos estructuras "promedio"(nota1, nota2, nota3) y "alumno" (nombre, sexo y edad)
Promedio esta anidada a alumno.
Pedir los datos, calcular el promedio e imprimir todos los datos
*/

//Estructura que contiene las notas
struct nota {
    float nota1;
    float nota2;
    float nota3;
};


//Estructua alumno
struct  alumno {
    char nombre[20];
    char apellido[20];
    int edad;
    nota examenes;
};



int main() {
    cout << "\n================================================" << endl;
    
    //variables
    int n;
    alumno alumnos[n];
    float promedios[n];
    
    cout << "\nIngrese la cantidad de alumnos: ";
    cin >> n;

    //Cargo los datos de los alumnos
    for (int i=0; i<n; i++){
        cout << "\nAlumno " << i+1 << endl;
        cout << "\nNombre: ";
        cin.ignore();
        cin.getline(alumnos[i].nombre,20,'\n');
        cout << "Apellido: ";
        cin.getline(alumnos[i].apellido,20,'\n');
        cout << "Edad: ";
        cin >> alumnos[i].edad;
        cout << " --> Nota primer parcial: ";
        cin >> alumnos[i].examenes.nota1;
        cout << " --> Nota segundo parcial: ";
        cin >> alumnos[i].examenes.nota2;
        cout << " --> Nota tercer parcial: ";
        cin >> alumnos[i].examenes.nota3;
        cin.ignore();
        promedios[i]=(alumnos[i].examenes.nota1+alumnos[i].examenes.nota2+alumnos[i].examenes.nota3)/3;//Debo colocarlo aca para que no me tire exception
        cout << "\n------------------------------------------------------" << endl;
    }
    //Muestro los datos
    cout << "\n==========REGISTRO ANUAL DE ALUMNOS==========" << endl;
    for(int i=0; i<n; i++){
        cout << "\n --> Nombre: " << alumnos[i].nombre;
        cout << "\n --> Apellido: " << alumnos[i].apellido;
        cout << "\n --> Edad: " << alumnos[i].edad;
        cout << "\n --> Primer parcial: " << alumnos[i].examenes.nota1;
        cout << "\n --> Segundo parcial: " << alumnos[i].examenes.nota2;
        cout << "\n --> Tercer parcial: " << alumnos[i].examenes.nota3;
        cout << "\n --> Promedio: " << promedios[i] << endl;
        cout << "\n------------------------------------------------------" << endl;
    } 
}
