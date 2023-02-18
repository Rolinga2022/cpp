#include <iostream>
using namespace std;


/*Programa: dado una cierta cantidad de etapas de un ciclista,
calcular el tiempo total empleado en correr todas las etapas.
*/

//Estructura etapas
struct etapa {
    double horas, minutos, segundos;
};

int main(){
    cout << "\n===========================================" << endl;

    //Variables
    int n;
    etapa etapas[n];
    /*int total_Hs=0;
    int total_Min=0;
    int total_Seg=0;*/

    cout << "\nIngrese cantidad de etapas corridas: ";
    cin >> n;

    double total_Hs=0;
    double total_Min=0;
    double total_Seg=0;

    for (int i=0; i<n; i++){
        cout << "\nEtapa " << i+1 << endl;
        cout << "\nHoras: ";
        cin >> etapas[i].horas;
        total_Hs+=etapas[i].horas;

        cout << "\nMinutos: ";
        cin >> etapas[i].minutos;
        while (etapas[i].minutos>=60){
            cout << "Debe ser menor a 60. Por favor, ingrese nuevamente los minutos: ";
            cin >> etapas[i].minutos;
        }
        total_Min+=etapas[i].minutos;

        cout << "\nSegundos: ";
        cin >> etapas[i].segundos;
        while (etapas[i].segundos>=60){
            cout << "Debe ser menor a 60. Por favor, ingrese nuevamente los segundos: ";
            cin >> etapas[i].segundos;
        }
        total_Seg+=etapas[i].segundos;
        cout << "\n------------------------------------------" << endl; 
    }

    cout << total_Hs << " " << total_Min << " " << total_Seg << endl;

    //Conversiones: 1h--3600seg / 1min--60seg
    long long tiempo_Tot_Seg;
    long long hs, min, seg;

    tiempo_Tot_Seg = total_Hs*3600 + total_Min*60 + total_Seg;

    if (tiempo_Tot_Seg>3600){
        hs=(tiempo_Tot_Seg - (tiempo_Tot_Seg%3600))/3600;
        min=(tiempo_Tot_Seg%3600-((tiempo_Tot_Seg%3600)%60))/60;
        seg=(((tiempo_Tot_Seg%3600)%60));
    } else if (tiempo_Tot_Seg < 3600){
        hs=0;
        min = (tiempo_Tot_Seg-(tiempo_Tot_Seg%60))/60;
        seg = tiempo_Tot_Seg%60;
    } else {
        hs=1;
        min=0;
        seg=0;
    }

    //Imprimo los registros
    cout << "\n=========REGISTRO DE ETAPAS=========" << endl;
    for (int i=0; i<n; i++){
        cout << "\nETAPA " << i+1 << endl;
        cout << "\n\t --> Horas: " << etapas[i].horas;
        cout << "\t --> Minutos: " << etapas[i].minutos;
        cout << "\t --> Segundos: " << etapas[i].segundos << endl;
        cout << "\n------------------------------------------" << endl;
    }
    cout << "\nEl tiempo total en recorrer todas las etapas fue de " << hs << ":" << min << ":" << seg << "." << endl;
    

    





}