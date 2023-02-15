#include <iostream>
using namespace std;

int main (){
    cout << "\n============================================" << endl;

    //LOTE DE CARGA (PIDE DATOS Y LOS GUARDA)
    
    //Variables
    int ca;//Variable de ingreso del codigo de articulo
    int cod_Art[20]; // Vector que almacena los codigos de los 20 articulos
    int pu;//Variable de ingreso del precio unitario de un articulo    
    int precio_Un[20];//Vector que almacena los precios unitarios respectivo a los 20 articulos
    cout << "\n=============LOTE DE CARGA DE DATOS===================" << endl;
    for(int i=0; i<20; i++){
        cout << "\nIngrese el codigo del articulo: ";
        cin >> ca;
        cout << "\nIngrese el precio del articulo: ";
        cin >> pu;

        cod_Art[i]=ca;
        precio_Un[i]=pu;
        cout << "\n--------------------------------------------------" << endl;
    }
    cout << "\n================LOTE DE PROCESO========================" << endl;

    //LOTE DE PROCESO (PIDE DATOS Y PROCESA)
    //Ventas del year anterior
    //Variables
    int nc;//numero de cliente
    int cod;//codigo de articulo
    int mm;//mes
    int dd;//dia
    int cant_Vend;//cantidad vendida

    //Inicializo el vector cantidad total vendida, va a acumular la cantidad vendida
    int cant_Tot_Vend[20];
    for(int i=0; i<20; i++){
        cant_Tot_Vend[i]=0;
    }

    //Inicializo el vector meses, el cual va a detectar si en alguno hubo o no ventas
    string meses[12] {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre","Noviembre", "Diciembre"};
    int mes[12];//Inicializo el vector de meses con referencia numerica
    bool mes_Vent[12];//Inicializo el vector para detectar si se vendio o no
    for (int i=0; i<12; i++){
        mes[i]=i+1;
        mes_Vent[i]=false;
    } 

    //Egreso e Ingreso
    cout << "\nNumero de cliente ( 1 - 300 ): ";
    cin >> nc;

    cout << "\nCodigo de articulo: ";
    cin >> cod;

    cout << "\nMes: ";
    cin >> mm;

    cout << "\nDia: ";
    cin >> dd;

    cout << "\nCantidad vendida: ";
    cin >> cant_Vend;

    while (nc!=0 && nc<=300){


        for(int i=0; i<20; i++){
            if (cod_Art[i]==cod){
                cant_Tot_Vend[i]+=cant_Vend;
            }
        }

        for(int i=0; i<12; i++){
            if(mes[i]==mm){
                mes_Vent[i]=true;
            }
        }
        
        //Vuelvo a pedir los datos
        cout << "\nNumero de cliente ( 1 - 300 ): ";
        cin >> nc;
        if (nc!=0 && nc<=300) {
            cout << "\nCodigo de articulo: ";
            cin >> cod;

            cout << "\nMes: ";
            cin >> mm;

            cout << "\nDia: ";
            cin >> dd;

            cout << "\nCantidad vendida: ";
            cin >> cant_Vend;
        }
        cout << "\n--------------------------------------------------" << endl;

    }

    //Para ordenar el listado que muestro a continuacion de mayor a menor
    int aux_T;//Variable auxiliar total para ordenar
    int aux_Cod;//Variable auxiliar para corresponder al codigo de articulo
    for(int i=0; i<20; i++){
        for(int j=0; j<19; j++){
            if(cant_Tot_Vend[j]<cant_Tot_Vend[j+1]){
                aux_T=cant_Tot_Vend[j+1];
                cant_Tot_Vend[j+1]=cant_Tot_Vend[j];
                cant_Tot_Vend[j]=aux_T;
                aux_Cod=cod_Art[j+1];
                cod_Art[j+1]=cod_Art[j];
                cod_Art[j]=aux_Cod;
            }
        }
    }

    //Para que me muestre el listado de codigo de articulo y cantidad total vendida
    cout << "\n============================================" << endl;
    cout << "\nCodigo de articulo" << "   " << "Cantidad total vendida " << endl;
    for (int i=0; i<20; i++) {
        cout << "    " << cod_Art[i] << "                            " << cant_Tot_Vend[i] << endl;
    }
    cout << "\n============================================" << endl;

    //Para que muestre los meses en los que no hubo ventas
    cout << "\nLos meses en los que no hubo ventas fueron: "<< endl;
    for (int i=0; i<12; i++){

        
        if (!mes_Vent[i]){
            cout << meses[i] << endl;
        }
    }
    cout << "\n============================================" << endl;

    //Para que muestre los codigos de los articulos que su cantidad de venta fueron mayor al promedio
    float acum_Ventas;//Acumulador de ventas
    float promedio;
    for(int i=0; i<20; i++){
        acum_Ventas+=cant_Tot_Vend[i];
    }
    promedio = acum_Ventas/20;
    cout << "\nLos codigos de los articulos cuyas ventas son mayor al promedio son: " << endl;
    for (int i=0; i<20; i++){
        if(cant_Tot_Vend[i]>promedio){
            cout << cod_Art[i] << endl;
        }
    }
    cout << "\n============================================" << endl;

}