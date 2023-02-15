#include <iostream>
using namespace std;

//Programa que registra los paquetes vendidos durante vacaciones
int main(){

    cout << "\n============================================" << endl;

    //Variables
    int np;      //numero de paquete
    int cantp;   //cantidad de personas
    float precU; //precio unitario
    int hs;      //horas totales de actividades
    char tA;     //Tipo de aventura
    char tA_Act; //Tipo de actividad actual
    int maxcantp=0;//acumulador de personas totales
    int min_hs;//minima cantidad de horas de una actividad
    int bmin_hs=0;//bandera para el minimo de hs
    char mintA;//actividad con el minimo de hs


    cout << "\nIngrese número de paquete: ";
    cin >> np;
    
    cout << "\nIngrese número de personas incluidas: ";
    cin >> cantp;

    cout << "\nIngrese precio por persona: ";
    cin >> precU;

    cout << "\nIngrese número de horas totales de actividades: ";
    cin >> hs;

    cout << "\nTIPOS DE AVENTURA: " << endl ;
    cout << "(M) --> Montaña" << endl ;
    cout << "(T) --> Trekking" << endl ;
    cout << "(R) --> Rafting" << endl ;
    cout << "(B) --> Bicicleta" << endl ;
    cout << "(C) --> Canopy" << endl ;
    cout << "(E) --> Escalar" << endl ;
    cout << "(K) --> Sky" << endl ;
    cout << "(S) --> Snowboard" << endl ;
    cout << "(J) --> Jumping" << endl ;
    cout << "(P) --> Parapente" << endl ;
    cout << "\nPor favor, ingrese tipo de aventura: ";
    cin >> tA;

    cout << "\n----------------------------------------------" << endl;

    //While - CORTE DE CONTROL
    while(np!=0){

        tA_Act=tA;
        int con_pVend=0;//contador de paquetes vendidos
        int acump=0;//acumulador de personas
        float pago;//monto a pagar por el paquete en cuestion
        float maxImp=0;//maximo importe pagado
        int acum_hs=0;//acunulador de horas totales de una actividad
        

        while (np!=0 && tA == tA_Act){

            con_pVend++;
            acump+=cantp;
            pago=cantp*precU;
            acum_hs+=hs;


            cout << "\n--------------------" << endl;
            cout << "\nEl monto total a pagar por este paquete es de " << pago << " AR$." << endl;
            cout << "\n--------------------" << endl;

            if (pago>maxImp){
                maxImp=pago;
            }



            cout << "\nIngrese número de paquete: ";
            cin >> np;

            if(np!=0){
                cout << "\nIngrese número de personas incluidas: ";
                cin >> cantp;

                cout << "\nIngrese precio por persona: ";
                cin >> precU;

                cout << "\nIngrese número de horas totales de actividades: ";
                cin >> hs;

                cout << "\nTIPOS DE AVENTURA: " << endl ;
                cout << "(M) --> Montaña" << endl ;
                cout << "(T) --> Trekking" << endl ;
                cout << "(R) --> Rafting" << endl ;
                cout << "(B) --> Bicicleta" << endl ;
                cout << "(C) --> Canopy" << endl ;
                cout << "(E) --> Escalar" << endl ;
                cout << "(K) --> Sky" << endl ;
                cout << "(S) --> Snowboard" << endl ;
                cout << "(J) --> Jumping" << endl ;
                cout << "(P) --> Parapente" << endl ;
                cout << "\nPor favor, ingrese tipo de aventura: ";
                cin >> tA;
                cout << "\n----------------------------------------------" << endl;
            }
            
        }

        if(bmin_hs==0){
            min_hs=acum_hs;
            mintA=tA_Act;
            bmin_hs=1;
        } else if (acum_hs<min_hs){
            min_hs=acum_hs;
            mintA=tA_Act;
        }

        cout << "\n============================================" << endl;
        cout << "\nSe vendieron " << con_pVend << " paquetes del tipo de aventura " << tA_Act << ".";
        cout << " Cuya venta con mayor importe fue de " << maxImp << "AR$." << "." << endl;
        cout << "\n============================================" << endl;
        maxcantp+=acump;

        
    }

    cout << "\n============================================" << endl;
    cout << "\nLa cantidad total de personas que disfrutaron de las aventuras fue de " << maxcantp << "." << endl;
    cout << "\n============================================" << endl;

    cout << "\nEl paquete con menos horas incurridas fue el " << mintA << " con un total de " << min_hs << " Hs." << endl;
    cout << "\n============================================" << endl;

}