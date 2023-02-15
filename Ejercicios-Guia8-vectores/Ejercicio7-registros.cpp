#include <iostream>
using namespace std;

//Programa que registra ventas de 15 articulos y luego realiza operaciones
int main() {

    cout << "\n===============================================" << endl;

    //Variables
    int v_Cant[15];//Vector que va a almacenar/acumular la cantidad de unidades vendidas
    int na;//Variable numero de articulo a vender "del 1 al 15"
    int cantidad;// cantidad vendida

    //Inicializo el vector "v_Cant[15]" en cero
    for (int i=0; i<15; i++){
        v_Cant[i]=0;
    } // ahora tengo un vector llamado "v_Cant" formado por 15 elementos
    // del tipo "int" cuyos valores son cero.

    //Egreso e Ingreso
    cout << "\nIngrese número de artículo (1 - 15): ";
    cin >> na;

    cout << "\nIngrese cantidad vendida: "; 
    cin >> cantidad;

    while(na!=0){

        v_Cant[na-1]+=cantidad;//acumulo en el indice correspondiente al articulo, la cantidad del mismo vendida

        cout << "\nIngrese número de artículo (1 - 15): ";
        cin >> na;

        if(na!=0){
            cout << "\nIngrese cantidad vendida: ";
            cin >> cantidad;
        }
    }

    //Para encontrar el articulo que mas se vendio en total
    int max = v_Cant[0];//asumo que el primer elemento es el mayor.
    int na_Max;//numero de articulo que mas se vendio

    //Para encontrar el numero de articulos que no tuvieron ventas
    int cont_No_Venta=0;//contador de articulos que no vendieron nada

    cout << "\n------------------------------------------------" << endl;
    for (int i=0; i<15; i++){

        if(v_Cant[i]>=max){
            max = v_Cant[i];
            na_Max = i+1;
        }

        
        if(v_Cant[i]==0){
            cout << "\nEl articulo -" << i+1 << "- no registró ventas." << endl;
        }
        
    }
    cout << "\n------------------------------------------------" << endl;

    //Egreso inciso "a"
    cout << "\n=============================================" << endl;
    cout << "\nEl articulo más vendido fue el número: " << na_Max << endl;
    cout << "\n=============================================" << endl;
    
    //Para saber la cantidad de unidades vendidas del articulo 10.
    cout << "\nSe vendieron " << v_Cant[9] << " unidades del artículo número 10." << endl;
    cout << "\n=============================================" << endl;

}