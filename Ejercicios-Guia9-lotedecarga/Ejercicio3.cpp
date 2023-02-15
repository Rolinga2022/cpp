#include <iostream>
using namespace std;

int main (){
    cout << "\n============COSTOS DE VIAJES POR KM en camion=========="<<endl;

    cout << "\n==============LOTE DE CARGA=============="<<endl;
    //variables
    int num_Tarifa[5];//Vector que acumula tipo de tarifa
    float imp_Km[5];//Vector que acumula el importe x Km de cada tarifa

    //Egreso e ingreso de datos
    for(int i=0; i<5; i++){
        cout << "\nIngrese numero de tarifa: ";
        cin >> num_Tarifa[i];
        cout << "\nIngrese importe por Km: ";
        cin >> imp_Km[i];
        cout << "\n----------------------------------"<<endl;
    }

    cout << "\n==============LOTE DE PROCESO=============="<<endl;
    //variables
    int num_Camion;
    int tarifa;
    int km_Recorridos;
    
    float importe;
    float recaud_Tarifa[5];//Vector que acumula el total recaudado por cada tarifa
    for (int i=0; i<5; i++){
        recaud_Tarifa[i]=0;
    }

    int camiones[10];//Vector que acumula a todos los camiones
    for (int i=0; i<10; i++){
        camiones[i]=i+1;
    }
    float recaud_Camion[10];
    for (int i=0; i<10; i++){
        recaud_Camion[i]=0;
    }

    int km_Realizado[10];
    for (int i=0; i<10; i++){
        km_Realizado[i]=0;
    }



    //Egreso e ingreso de datos
    cout << "\nIngrese numero de camion (1 - 100): ";
    cin >> num_Camion;
    cout << "\nIngrese tarifa: ";
    cin >> tarifa;
    cout << "\nIngrese Km recorridos: ";
    cin >> km_Recorridos;

    while (num_Camion>=0){

        for(int i=0; i<5; i++){
            if(tarifa==num_Tarifa[i]){
                importe = km_Recorridos*imp_Km[i];
                recaud_Tarifa[i]+=importe;
            }
        }

        for (int i=0; i<10; i++){
            if (num_Camion==camiones[i]){
                recaud_Camion[i]+=importe;
                km_Realizado[i]+=km_Recorridos;
            }
        }

        

        //Pido los datos nuevamente para generar un nuevo registro
        cout << "\n----------------------------------"<<endl;
        cout << "\nIngrese numero de camion (1 - 100): ";
        cin >> num_Camion;
        if(num_Camion>=0){
            cout << "\nIngrese tarifa: ";
            cin >> tarifa;
            cout << "\nIngrese Km recorridos: ";
            cin >> km_Recorridos;
        }
    }

    //Informo el total recaudado por cada tarifa
    cout << "\n==============TOTAL RECAUDADO SEGUN CADA TARIFA==============" << endl;
    for (int i=0; i<5; i++){
        cout << "\n----------------------------------"<<endl;
        cout << "\nLa tarifa " << num_Tarifa[i] << " recaudo un total de " << recaud_Tarifa[i] << "." << endl;   
    }

    //Informo el total recaudado por camion, ordenado de mayor a menor
    //ordenamiento - metodo burbuja
    float aux, aux1;
    for (int i=0; i<10; i++){
        for (int j=0; j<9; j++){
            if(recaud_Camion[j]<recaud_Camion[j+1]){
                aux=recaud_Camion[j+1];
                recaud_Camion[j+1]=recaud_Camion[j];
                recaud_Camion[j]=aux;
                aux1=camiones[j+1];
                camiones[j+1]=camiones[j];
                camiones[j]=aux1;
            }
        }
    }
    //Muestro el total recaudado por cada camion ordenados de mayor a menor recaudacion
    cout << "\n==============TOTAL RECAUDADO POR CAMION==============" << endl;
    cout << "\nNro. Camion          |           Total recaudado"<< endl;
    for (int i=0; i<10; i++){
        cout << "    " << camiones[i] << "                |                  " << recaud_Camion[i]<< endl;
        cout << endl;
    }

    //Para determinar el camion que menos recorrido hizo
    int bmin=0;//Bandera minimo
    int min_Km;
    int min_Camion;
    for (int i=0; i<10; i++){
        if (km_Realizado[i]>0){
            if (bmin==0){
                min_Km=km_Realizado[i];
                min_Camion = camiones[i];
                bmin=1;
            } else if (km_Realizado[i]<min_Km){
                min_Km = km_Realizado[i];
                min_Camion = camiones[i];
            }
        }
    }
    cout << "\nEl camion que realizo la menor cantidad de Km fue el numero " << min_Camion << endl;
    
    
}