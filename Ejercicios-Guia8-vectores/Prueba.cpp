#include <iostream>
using namespace std;

int main () {
    int n;
    int v[5];

    for (int i=0; i<5; i++){

        cout << "Ingrese numero: ";
        cin >> n;
        v[i]=n;

    }

    for (int i=0; i<5; i++){
        cout << v[i] << " ";
    }
    

}