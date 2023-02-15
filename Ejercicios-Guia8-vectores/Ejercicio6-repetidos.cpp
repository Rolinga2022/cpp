#include <iostream>
using namespace std;

int main() {
    
    cout << "\n=================================================" << endl;

    int n;
    int v[10];
    int con=0;

    for(int i=0; i<10; i++){
        cout << "\nIngrese un valor entero: ";
        cin >> n;
        v[i]=n;
    }

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(v[i]==v[j]){
                con++;
            }
        }
    }

    if(con>=11){
        cout << "\n---------------------------------------" << endl;
        cout << "\nHay valores repetidos." << endl;
        cout << "\n---------------------------------------" << endl;
    } else {
        cout << "\n---------------------------------------" << endl;
        cout << "\nNo hay valores repetidos." << endl;
        cout << "\n---------------------------------------" << endl;
    }
    
}