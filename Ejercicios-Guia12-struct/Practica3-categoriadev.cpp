#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

/*Programa: ingreso de datos de 3 desarrolladores: nombre, experiencia en anios y empresa actual.
Luego categorizarlos en Trainee (menos de 2), junior(mas de 2 y menos de 4), senior(mas de 4).
Imprimir el registtro 
*/

struct desarrolladores {
    char nombre[30];
    int anios_Exp;
    char empresa_Actual[30];
    char categoria[30];
};

struct clasificacion {
    char tipo[20];
};

int main (){

    cout << "\n====================================" << endl;

    desarrolladores desarrollador[3];// le indico que voy a tener un vector de tres elementos cuyos elementos son del tipo desarrollador
    clasificacion categoria[3];

    //Ingreso de datos
    for (int i=0; i<3; i++){
        cout << "\nDesarrollador " << i+1 << endl;
        cout << "\nNombre: ";
        cin.getline(desarrollador[i].nombre,30,'\n');
        cout << "Años de experiencia: ";
        cin >> desarrollador[i].anios_Exp;
        cout << "Empresa actual: ";
        cin.ignore();
        cin.getline(desarrollador[i].empresa_Actual,30,'\n');
        cout << "\n--------------------------------------" << endl;
    }

    //Proceso los datos 
    
    for (int i=0; i<3; i++){
        if (desarrollador[i].anios_Exp>4){
            strcpy(categoria[i].tipo,"Senior");//Para ingresar caracteres a la estructura debo usar la funcion "strcyp".
        } else if (desarrollador[i].anios_Exp>2){
            strcpy(categoria[i].tipo,"Junior");
        } else {
            strcpy(categoria[i].tipo,"Trainee");
        }
    }

    //Imprimo datos
    cout << "\n==========Datos de los desarrolladores==========" << endl;
    for (int i=0; i<3; i++){
        cout << "\nNombre --> " << desarrollador[i].nombre << endl;
        cout << "Años de experiencia --> " << desarrollador[i].anios_Exp << endl;
        cout << "Empresa actual --> " << desarrollador[i].empresa_Actual << endl;
        cout << "Categoría --> " << categoria[i].tipo << endl;
        cout << "\n-------------------------------------------------------" << endl;
    }
}