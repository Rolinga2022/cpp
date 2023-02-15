#include <iostream>
using namespace std;

//EMPRESA DE ALQUILER DE AUTOS
int main() {
    cout << "\n============LOTE DE CARGA============" << endl;
    cout << "\n------------Primer lote de registros------------" << endl;
    //Variables
    int autos[10];
    for (int i=0; i<10; i++){
        autos[i]=1000+(i+1);
    }

    int categorias[5];
    for (int i=0; i<5; i++){
        categorias[i]=i+1;
    }

    float imp_Alquiler_Km[5];
    for (int i=0; i<5; i++){
        cout << "\nAlquiler categoria " << i+1 << ":";
        cin >> imp_Alquiler_Km[i];
        cout << "\n--------------------------------------" << endl;
    }

    cout << "\n------------Segundo lote de registros------------" << endl;
    //Variables
    //Esta se comparte con el primer lote
    int agencias[8];
    for (int i=0; i<8; i++){
        agencias[i]=i+1;
    }

    string ubicacion[3] {"Aeropuerto de Ezeiza","Aeroparque","Centro de la ciudad"};

    cout << "\n============LOTE DE PROCESO============" << endl;
    //Variables
    int cod_Auto;
    int categoria;
    int num_Cliente;
    int total_Dias;
    int km_Recorridos;

    float total;
    int imp_Total[5];
    for (int i=0; i<5; i++){
        imp_Total[i]=0;
    }

    int clientes[5];
    for (int i=0; i<5; i++){
        clientes[i]=i+1;
    }

    cout << "\nNúmero de cliente: ";
    cin >> num_Cliente;
    cout << "\nCódigo de Auto: ";
    cin >> cod_Auto;
    cout << "\nCategoría: ";
    cin >> categoria;
    cout << "\nTotal de días de alquiler: ";
    cin >> total_Dias;
    cout << "\nKm recorridos: ";
    cin >> km_Recorridos;

    while (num_Cliente!=0 && num_Cliente<=5){

        //Calculo el importe total a pagar por el alquiler
        for (int i=0; i<5; i++){
            if (categoria==categorias[i]){
                total = imp_Alquiler_Km[i]*km_Recorridos;
            }
        }

        //Cargo el importe total al respectivo cliente
        for (int i=0; i<5; i++){
            if (num_Cliente==clientes[i]){
                imp_Total[i]+=total;
            }
        }
        cout << "\n--------------------------------------" << endl;
        //Vuelvo a pedir los datos
        cout << "\nNúmero de cliente: ";
        cin >> num_Cliente;
        if(num_Cliente!=0 && num_Cliente<=5){
            cout << "\nCódigo de Auto: ";
            cin >> cod_Auto;
            cout << "\nCategoría: ";
            cin >> categoria;
            cout << "\nTotal de días de alquiler: ";
            cin >> total_Dias;
            cout << "\nKm recorridos: ";
            cin >> km_Recorridos;
        }
    }

    //Muestro una lista que contenga el numero de cliente y el total abonado en alquiler
    cout << "\n==================TOTAL ABONADO=====================" << endl;
    cout << "\nNúmero de cliente" << "            " << "Total abonados en alquiler (mes)" << endl;
    for (int i=0; i<5; i++){
        if(imp_Total[i]!=0){
        cout << "\n       " << clientes[i] << "                                  " << imp_Total[i] << " AR$" << endl;    
        }
    }
    cout << "\n-------------------------------------------------------------------------------" << endl;




}