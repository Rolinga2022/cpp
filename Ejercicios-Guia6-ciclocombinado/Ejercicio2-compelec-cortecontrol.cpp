#include <iostream>
using namespace std;

//Programa para calcular anualmente el consumo electrico de usuarios
//Se tiene un lote de "Registros por cada uno de los usuarios"
//AGRUPADO por zonas, finaliza cuando la zona es cero. 
int main(){

    cout << "\n=====CALCULO ANUAL DE CONSUMO ELÉCTRICO SEGÚN LA ZONA=====" << endl;

    //Variables
    int z; //zona
    int zact; //zona actual
    int nc; //numero de cliente
    int kv; //kilovatios consumidos en el periodo

    //Egreso
    cout << "\nPor favor, ingrese el número de cliente: ";
    //Ingreso/asignacion
    cin >> nc;

    //Egreso
    cout << "\nPor favor, ingrese la cantidad de Kv consumidos: ";
    //Ingreso/asignacion
    cin >> kv;

    //Egreso
    cout << "\nPor favor, ingrese la zona (valor numérico entero): ";
    //Ingreso/asignacion
    cin >> z;

    //WHILE
    while (z!=0) {
        zact=z;//Se usa para el cambio de lote-->el agrupamiento

        //Variables
        int conupz=0;//contador de usuarios por zona
        float factUsu;//monto facturado al usuario
        float tFact=0;//acumulador montos facturados totales por grupo
        int exced;// Excedente de consumo 
        float tar1=0.1;//Costo primeros 100
        float tar2=0.12;//Costo segundos 100
        float tar3=0.15;//Costo terceros 100 en adelante
        float prim, seg, ter_Ad; //Primeros 100kv, segundos 100 y terceros 100 en adelante


        while(z==zact)/*Para el cambio de lote*/{

            conupz++;
            if(kv>200){
                exced = kv - 200;
                prim = 100 * tar1;
                seg = 100 * tar2;
                ter_Ad = exced * tar3;
                factUsu = prim + seg + ter_Ad;
            } else if(kv>100){
                exced = kv - 100;
                prim = 100 * tar1;
                seg = exced * tar2;
                factUsu = prim + seg;
            } else {
                factUsu = kv * tar1;
            }
            tFact+=factUsu;

            cout << "\n-------------------------------------------------------" << endl;
            //Egreso
            cout << "\nPor favor, ingrese el número de cliente: ";
            //Ingreso/asignacion
            cin >> nc;

            //Egreso
            cout << "\nPor favor, ingrese la cantidad de Kv consumidos: ";
            //Ingreso/asignacion
            cin >> kv;

            //Egreso
            cout << "\nPor favor, ingrese la zona (valor numérico entero): ";
            //Ingreso/asignacion
            cin >> z;

            
        }

        //Egreso
        cout << "\n=====================================================" << endl;
        cout << "\nZona: " << zact << endl;
        cout << "Cantidad de usuarios de la zona: " << conupz << endl;
        cout << "Total facturado en la zona: " << tFact << " AR$" << endl;
        cout << "\n=====================================================" << endl;
    }
}