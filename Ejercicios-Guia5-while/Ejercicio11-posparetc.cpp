#include <iostream>
using namespace std;


//Programa que solicita una lista de valore
//corta con cero
//imprime cuantos positivos, primos, negativos y pares
int main(){

    cout << "\n==================================================================" << endl;

    //Variables
    int n;
    int cpos = 0;//contador de positivos
    int cneg =  0;//contador de negativos
    int cpar = 0;//contador de pares
    
    int cprim = 0;//contador de primos

    cout << "\nPor favor, ingrese un valor numérico (ingrese cero para finalizar): "; 
    cin >> n;

    while(n!=0){
        if(n>0){
            cpos++;

            //Las siguientes variables las tengo que definir en este scope
            int x = 1;//Evaluador de primos
            int con = 0;//contador evaluador primos
            while(x<=n){
                if(n%x==0){
                    con++;
                }
                x++;
            }
            if(con==2){
                cprim++;
            }
            if(n%2==0){
                cpar++;
            }
        } else {
            cneg++;
        }
        cout << "\nPor favor, ingrese un valor numérico (ingrese cero para finalizar): "; 
        cin >> n;
    }

    cout << "\n==================================================================" << endl;
    cout<<"\n -->Se ingresaron " << cpos << " valores POSITIVOS." << endl;
    cout<<"\n -->Se ingresaron " << cneg << " valores NEGATIVOS." << endl;
    cout<<"\n -->Se ingresaron " << cpar << " valores PARES." << endl;
    cout<<"\n -->Se ingresaron " << cprim << " valores PRIMOS." << endl;
    cout << "\n==================================================================" << endl;

}