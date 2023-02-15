#include <iostream>
using namespace std;

int main() {
    cout << "\n===============================================" << endl;

    char cadena[50];
    cout << "\nIngrese una frase: ";
    cin.getline(cadena,50,'\n');

    char palabra[50];
    cout << "\nIngrese una palabra a buscar: ";
    cin.getline(palabra,50,'\n');

    int indice;
    int indice2;
    int b=0;//Bandera separador de palabra
    for (int i=0; i<50; i++){
        int contador;
        if (cadena[i]==' ' /*|| cadena[i]=='\0'*/){
            indice=i;
            //int indice2;//asume el valore del indice anterior
            if (b==0){
                int cont=0;
                for (int j=0; j<indice; j++){
                    if (cadena[j]==palabra[j]){
                        cont++;
                    }
                }
                if (cont==indice){
                    cout << "\nPalabra CONTENIDA." << endl;
                } else {
                    //cout << "\nPalabra NO CONTENIDA." << endl;
                }
                b=1;
                indice2=indice;
            } else {
                int cont=0;
                int x=0;
                int dif=indice-indice2;
                for (int j=(indice2+1); j<indice; j++){
                    if (palabra[x]==cadena[j]){
                        cont++;
                    }
                    x++;
                }
                if (cont==(dif-1)){
                    cout << "\nPalabra CONTENIDA." << endl;
                } else {
                    //cout << "\nPalabra NO CONTENIDA." << endl;
                }
                indice2=indice;
            }
        } else if(cadena[i]=='\0'){
            indice=i;
            int cont=0;
            int x=0;
            
            for (int j=indice2+1; j<indice; j++){
                if(palabra[x]==cadena[j]){
                    cont++;
                }
                x++;
            }
            contador=cont;
             
        } 
        int dif=indice-indice2;
        if (contador==(dif-1)){
                cout << "\n -- ultima Palabra CONTENIDA." << endl;
            } 
               
    }
}
