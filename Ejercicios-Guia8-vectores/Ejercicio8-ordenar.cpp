#include <iostream>
using namespace std;

//Ordenar un vector de mayor a menor
int main() {

    //Variables
    int v[20] {1,2,3,4,5,6,7,8,9,10,20,19,18,17,16,15,14,13,12,11};//Vector de 20 numeros
    int vp[20] {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};//Vector posicion
    //Para ordenarlo utilizo el metodo de burbujeo
    for (int i=0; i<20; i++){
        int aux;//Variable auxiliar
        int auxp;//variable auxiliar de posicion
        for (int j=0; j<19; j++){
            if (v[j]<v[j+1]){
                aux = v[j+1];
                v[j+1]=v[j];
                v[j]=aux;

                auxp = vp[j+1];
                vp[j+1]=vp[j];
                vp[j]=auxp;
            }
        }
    }

    cout << "\n---------------------------------------" << endl;
    for (int i=0; i<20; i++){
        cout << v[i] << " ";
    }
    cout << "\n---------------------------------------" << endl;
    cout << "\n----Posiciones Originales----" << endl;
    for (int i=0; i<20; i++){
        
        cout << vp[i] << " ";
    }
    cout << "\n---------------------------------------" << endl;
    


}