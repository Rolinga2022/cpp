#include <iostream>/*Directiva: insrtuccion que nos permite agregar contenido*/
/*existente en bibliotecas/librerias externas al programa en cuestion.*/
/*bibliotecas/librerias: conjunto de clasesy funciones que nos permiten realizar*/
/*diferentes funciones que necesitemos.*/

using namespace std; /*Sentencias/Declaraciones: terminan en punto y coma.*/
//esta sentencia de arriba identifica el espacio o scope. 

int main(){ //esto es una funcion. Justo esta es la funcio principal

    int salario=3500;//declaro y asigno valor a variable en una unica linea

    int salario1;//declaro variable 
    salario1=3500;//asigno valor a la variable en cuestion
    
    cout << "Hola, mi nombre es Rodrigo Peire" << endl; //Sentencia "console out"

    cout << salario << endl;
    cout << salario1 << endl;

    return 0;

}