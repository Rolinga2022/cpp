#include <iostream>
using namespace std;


//Programa que me devuelve el precio una PC en funcion de sus componentes
int main () {

    cout << "\n=================================================" << endl;

    //Variables
    int p, m, impTotal;
    bool d;

    //Egreso
    cout << "\nPor favor, ingrese tipo de procesador --> (1)-i5  (2)-i7 (3)-i9: ";
    //Ingreso
    cin >> p;//p: procesador

    //Egreso
    cout << "\nPor favor, ingrese tipo capacidad de RAM --> (1)-8GB  (2)-16GB (3)-32GB: ";
    //Ingreso
    cin >> m;//m: memoria RAM

    //Egreso
    cout << "\nLos equipos vienen con un disco de 500GB de almacenamiento." << endl;
    cout << "¿DESEA EXTENDER LA CAPACIDAD DE ALMACENAMIENTO A 1TB? (+USD300) --> (1)-SI  (0)-NO: ";
    //Ingreso
    cin >> d;//d: disco interno

    cout << "\n=================================================" << endl;

    //SWITCH
    switch (p) {
        case 1: 
            
            switch (m) {
                case 1:
                    impTotal = 800;
                break;

                case 2:
                    impTotal = 900;
                break;

                case 3:
                    impTotal = 1000;
                break;

                default:
                    cout << "\nNO INGRESASTE NINGUNA OPCIÓN DE MEMORIA RAM" << endl;
                break;
            }

        break;

        case 2:

            switch (m) {
                case 1:
                    impTotal = 900;
                break;

                case 2:
                    impTotal = 1000;
                break;

                case 3:
                    impTotal = 1400;
                break;

                default:
                    cout << "\nNO INGRESASTE NINGUNA OPCIÓN DE MEMORIA RAM" << endl;
                break;
            }

        break;

        case 3: 

            switch (m) {
                case 1:
                    impTotal = 1200;
                break;

                case 2:
                    impTotal = 1400;
                break;

                case 3:
                    impTotal = 2000;
                break;

                default:
                    cout << "\nerror: NO INGRESASTE NINGUNA OPCIÓN DE MEMORIA RAM" << endl;
                break;
            }

        break;

        default:
            cout << "\nerror: NO INGRESASTE NINGUNA OPCIÓN DE PROCESADOR" << endl;
        break;
    }

    //Condicion
    if (d){
        impTotal+=300;
    }

    //Egreso
    cout << "\nEl importe total a pagar es de: " << impTotal << " USD." << endl;
    cout << "\n=================================================" << endl;



}