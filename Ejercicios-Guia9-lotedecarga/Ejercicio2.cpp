#include <iostream>
using namespace std;

//Programa para cargar y procesar datos
int main() {
    cout << "\n==========================================================" << endl;

    cout << "\n========LOTE DE CARGA========" << endl;
    //LOTE DE CARGA
    //Variable
    int articulos[5];
    int stock[5];
    float precio_Un[5];

    //Carga y almacenamiento de datos
    for (int i=0; i<5; i++){

        cout << "\nIngrese número de artículo: ";
        cin >> articulos[i];
        cout << "\nIngrese cantidad de unidades en stock: ";
        cin >> stock[i];
        cout << "\nIngrese el precio unitario: ";
        cin >> precio_Un[i];
        cout << "\n-------------------------------------------------" << endl;
    }

    cout << "\n========LOTE DE PROCESO========" << endl;
    
    //LOTE DE PROCESO
    //Variables
    int num_Cliente;
    int clientes[5];
    int num_Articulo;
    int cant_Vendida;
    float imp_Total;

    for (int i=0; i<5; i++){
        clientes[i]=i+1;
    }

    float valor_Ventas[5];
    for (int i=0; i<5; i++){
        valor_Ventas[i]=0;
    }

    bool art_Vend[5];
    for (int i=0; i<5; i++){
        art_Vend[i]=false;
    }

    //Egreso e ingreso
    cout << "\nIngrese número de cliente: ";
    cin >> num_Cliente;
    cout << "\nIngrese número de artículo: ";
    cin >> num_Articulo;
    cout << "\nIngrese la cantidad vendida: ";
    cin >> cant_Vendida;

    while(num_Cliente!=0 && num_Cliente<=300){

        for (int i=0; i<5; i++){
            if (num_Articulo == articulos[i]){
                imp_Total = cant_Vendida * precio_Un[i];
            }
        }

        for (int i=0; i<5; i++){
            if (num_Cliente == clientes[i]){
                valor_Ventas[i]+=imp_Total;
            }
        }

        for (int i=0; i<5; i++){
            if (num_Articulo==articulos[i]){
                valor_Ventas[i]=true;
            }
        }

        

        //Listado de venta
        cout << "\n==================Listado de venta================="<<endl;
        cout << "\nNro. Cliente               Nro. Articulo           Cantidad Vendida                Importe Total" << endl;
        cout << "        " << num_Cliente << "                        " << num_Articulo << "                      " << cant_Vendida << "                            " << imp_Total << endl;       

        cout << "\n-------------------------------------------------" << endl;
        cout << "\nIngrese número de cliente: ";
        cin >> num_Cliente;
        if(num_Cliente!=0){
            cout << "\nIngrese número de artículo: ";
            cin >> num_Articulo;
            cout << "\nIngrese la cantidad vendida: ";
            cin >> cant_Vendida;
        } 
    }

    //Determino cual fue el cliente que mas compro
    float max_Venta=0;
    int cliente_Max;
    for (int i=0; i<5; i++){
        if(valor_Ventas[i]>max_Venta){
            max_Venta = valor_Ventas[i];
            cliente_Max= clientes[i];
        }
    }
    cout << "\n-------------------------------------------------" << endl;
    cout << "\nEl cliente que mas compro fue el numero: "<< cliente_Max << endl;
    cout << "\n-------------------------------------------------" << endl;

    for (int i=0; i<5; i++){
        if (valor_Ventas[i]==false){
            cout <<"\nEl articulo " << articulos[i] << " no registro ventas." << endl;
        }
    }




}