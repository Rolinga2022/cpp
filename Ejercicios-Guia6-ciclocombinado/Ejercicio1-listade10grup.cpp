#include <iostream>
using namespace std;

//Lista de 10 grupos de num enteros separados entre ellos por cero.
//a --> grupo con mayor porcentaje de num impares positivos respecto al total de num en el grupo
//b --> p/cada grupo, el ultimo numero primo y la posicion de ingreso. Si no hay primo, informe.
//c --> Cuantos grupos estan formados por numeros ordenados de menor a mayor.
int main() {

    //Variables globales
    //Para el inciso "a"
        float maxpip = 0;//maximo porcentaje de impares positivos
        int ng;//numero de grupo

    //Para el inciso "c"    
        int congo=0;//contador de grupos ordenados de mayor a menor
        
    

    //Ciclo FOR
    for (int x=0; x<4; x++){
        cout << "\n====================================================" << endl;
        
        //Variables para cada vuelta del FOR
        int n; //Variable de ingreso de numeros 

            //Para el inciso "a"
                int ct=0;//contador total de valores ingresados por vuelta del FOR.
                int cip=0;//contador de impares positivos.
                float pip;//porcentaje de imapres positivos.

            //Para el inciso "b"
                int posp=0;//posicion del numero primo
                int bnp=0;//bandera para la aparicion de num primo
                int ultp;//ultimo numero primo
                int ordap;//orden de aparicion del primo

            //Para el inciso "c"
                int ultn;//ultimo numero ingresado
                int bo=0;//bandera para saber si estan ordenados 

        //Egreso
        cout << "\nPor favor, ingrese un valor numérico diferente de cero." << endl;
        cout << "(para finalizar el ingreso de la lista, ingrese cero): ";
        //Ingreso/asignacion
        cin >> n;
        ultn = n;//le asigno a la variable ultn el valor de n.

        //Ciclo WHILE
        while(n!=0){

            //Para el inciso "a"
                ct++;
                //Condicion
                if(n%2!=0 && n>0){
                    cip++;
                }

            //Para el Inciso "b"
                posp++;
                int conp=0;//contador para num primos
                //ciclo for para determinar primos
                for(int y=1; y<=n; y++){
                    if(n%y==0){
                        conp++;
                    }
                }
                //condicion que determina el primo
                if(conp==2){
                    ultp=n;
                    ordap=posp;
                    bnp=1;
                }

            //Para el inciso "c"
                if(n<=ultn){
                    ultn=n;
                } else {
                    bo=1;
                }     
               
            //pido nuevamente un valor de n.
            cout << "\nPor favor, ingrese un valor numérico diferente de cero." << endl;
            cout << "(para finalizar el ingreso de la lista, ingrese cero): ";
            cin >> n;
        }
        
        //Para el inciso "a"
            pip = (cip/ct)*100;
            //condicion
            if(pip > maxpip){
                maxpip = pip;
                ng = x+1;
            }
        
        //Para el Inciso "b"
            if(bnp!=0){
                cout << "\n====================================================" << endl;
                cout << "\nRespuesta inciso (b): " << endl;
                cout << " --> El último número primo del grupo fue el " << ultp << ", el cual se ingresó en la posición " << ordap << "." << endl;
                cout << "\n====================================================" << endl;
            } else {
                cout << "\n====================================================" << endl;
                cout << "\nRespuesta inciso (b): " << endl;
                cout << " --> En este grupo de números ninguno es PRIMO." << endl;
                cout << "\n====================================================" << endl;
            }

        //Para el Inciso "c"
            if (bo==0){
                congo++;
            }   
    }
    
    //Egresos
    //Para el inciso "a"
        cout << "\n====================================================" << endl;
        cout << "\nRespuesta inciso (a): " << endl;
        cout << " --> El grupo que presenta mayor porcentaje de impares positivos es el grupo: " << ng << endl;
        cout << "\n====================================================" << endl;
    
    //Para el inciso "c"
        cout << "\nRespuesta inciso (c): " << endl;
        cout << "El cantidad de grupos cuyos valores están ordenados de mayor a menor es de " << congo << "." << endl;
        cout << "\n====================================================" << endl;

}