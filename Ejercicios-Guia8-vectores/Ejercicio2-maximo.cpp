#include <iostream>
using namespace std;

int main(){
    cout << "\n===========================================" << endl;
    int n;
    int v[50];
    

    for (int i=0; i<50; i++){
        cout << "\nIngrese un valor entero: ";
        cin >> n;

        v[i]=n;

    }

    int max, pos;
    int bmax=0;

    for (int i=0; i<50; i++){
        if (bmax==0){
            max=v[i];
            pos=i+1;
            bmax=1;
        } else if (v[i]>max){
            max=v[i];
            pos=i+1;
        }
    }

    cout << "\n===========================================" << endl;
    cout << "\nEl número más grande ingresado en el vector fue el " << max << ", el cual fue ingresado en la posición " << pos << endl;
    cout << "\n===========================================" << endl;
}