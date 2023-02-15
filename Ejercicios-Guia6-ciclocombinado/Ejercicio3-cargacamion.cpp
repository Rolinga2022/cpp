#include <iostream>
using namespace std;

//Programa que pide ingresar pesos de encomiendas
//Finaliza cuando la encomienda tiene un valor negativo
//Las encomiendas se colocan el camiones que resisten hasta 200Kg
int main (){

    cout << "\n===============CARGA DE CAMIONES==================" << endl;

    //Variables
    int kg;//Peso de la encomienda
    int camion=0; //contador de camiones
    int maxNEnc=0; //maxima cantidad de encomiendas
    int maxCam;//Numero de camion que contiene mas encomiendas

    //Egreso
    cout << "\nPor favor, ingrese el peso(Kg) de la encomienda: ";
    //Ingreso
    cin >> kg;

    //While
    while (kg>0){
        //Variable 
        int kgT=0;//acumulador de peso de las encomiendas
        int nEn=0;//contador de encomiendas


        while (kg > 0 && kg + kgT <= 200){

            nEn++;
            kgT+=kg;
            //Egreso
            cout << "\nPor favor, ingrese el peso(Kg) de la encomienda: ";
            //Ingreso
            cin >> kg;
        }
        camion++;
        cout << "\n==============================================" << endl;
        cout << "Camión " << camion << ": " << kgT << "Kg." << endl;  
        cout << "\n==============================================" << endl;

        if(nEn>maxNEnc){
            maxNEnc=nEn;
            maxCam=camion;
        }
    }

    //Egresos
    cout << "\n==============================================" << endl;
    cout << "\nEl camión que transporta la mayor cantidad de encomiendas es el " << maxCam << " con " << maxNEnc << " encomiendas." << endl;
    cout << "\n==============================================" << endl;
    cout << "\nSe cargaron un total de " << camion << " camion/es." << endl;
    cout << "\n==============================================" << endl;

}