#include <iostream>
using namespace std;


//Programa que utiliza la funcion "sumar" para realizar dicha operacion
//La diferencia con el anterior es que la funcion la defino debajo del "main"

//por tal motivo debo declararla por encima del "main"
int sumar(int, int);


int main() {

    cout << "\n===============================================" << endl;

    //Variables
    int a, b, s;

    cout << "\nIngrese un valor entero: ";
    cin >> a;

    cout << "\nIngrese otro valor entero: ";
    cin >> b;

    s = sumar(a, b);

    cout << "\n --> La suma de ambos valores es igual a " << s << endl; 

    cout << "\n===============================================" << endl;

}

//Defino la funcion
int sumar (int n1, int n2) /*type and name of function*/
{
    int resultado; // Declaration of varaible return

    resultado = n1 + n2; //operation

    return resultado; //return
}

