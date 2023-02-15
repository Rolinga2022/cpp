#include <iostream>
using namespace std;

//Programa que emite los valores del 1 al 100 de 5 en 5.
int main() {
    cout << "\n================================" << endl; 
    for (int i=0; i<=100; i+=5)/*o i=i+5*/{
        cout << i << endl;
    }
    cout << "================================" << endl;
}