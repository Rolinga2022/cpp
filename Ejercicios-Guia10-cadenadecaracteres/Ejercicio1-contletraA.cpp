#include <iostream>
using namespace std;

//Programa para ingresar una palabra y luego cuente las letras a
int main () {
    char palabra[30];
    cout << "Ingrese una palabra: ";
    cin >> palabra;
    cout << "\n" << palabra << endl;

    int con=0;//Contador de letras "a"
    for (int i=0; i<30; i++){
        if (palabra[i]=='a'){
            con++;
        }
    }
    cout << "\nEl caracter 'a' aparece " << con << " veces." << endl;
    

}