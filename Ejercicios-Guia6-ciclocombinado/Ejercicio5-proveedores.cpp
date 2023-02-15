#include <iostream>
using namespace std;

//Programa que registra compras a proveedores
int main () {

    cout << "\n===================================================" << endl;


    //Variables
    int numProv;//numero de proveedor
    int dd;//dia (de 1 a 31) 
    int mm;//mes (de 1 a 12)
    char tFact;//tipo de factura (A, B, C)
    int numProd;//numero de producto
    int cant;//cantidad comprada
    float precU;//precio unitario
    int numProvAct;//numero de proveedor actual

    float totAnualFactA=0;//Acumulador de importes anuales de factura A 
    float totAnualFactB=0;//Acumulador de importes anuales de factura B 
    float totAnualFactC=0;//Acumulador de importes anuales de factura C 

    float montoMinAgo;//Monto minimo agosto global
    int prodMinAgo;//numero de producto de menor costo en agosto global
    int bminAgo=0;//bandera minimo agosto

    int maxCantComp=0;//Cantidad maxima comprada global
    int provCantMaxGlobal;//Proveedor que tiene la maxima cantidad comrpada de una
    int numProdMaxGlobal;

    //Egreso e Ingreso 
    cout << "\nNúmero de proveedor: ";
    cin >> numProv;

    cout << "\nDía: ";
    cin >> dd;

    cout << "\nMes: ";
    cin >> mm;

    cout << "\nTIPO DE FACTURA" << endl;
    cout << " --> (A) - Responsable Inscripto." << endl;
    cout << " --> (B) - Consumidor Final." << endl;
    cout << " --> (C) - Monotributo." << endl;
    cout << "Ingrese tipo de factura: " << endl;
    cin >> tFact;

    cout << "\nNúmero de producto: ";
    cin >> numProd;

    cout << "\nCantidad comprada: ";
    cin >> cant;

    cout << "\nPrecio unitario (AR$): ";
    cin >> precU;

    

    //While
    while (numProv!=0){
        numProvAct = numProv;

        float monto;//Monto de una compra a proveedor
        float maxMonto=0;//Maximo monto total a proveedor
        float totFactA=0;//Acumulador de importes de factura A por proveedor
        float totFactB=0;//Acumulador de importes de factura B por proveedor
        float totFactC=0;//Acumulador de importes de factura C por proveedor

        float bMinMon=0;//bandera monto minimo
        float montoMinAgoProv;//monto minimo compra agosto por proveedor
        int prodMinAgoProv;//producto cuyo monto es el minimo en agosto por proveedor

        int contCompProv=0;//contador de compras a proveedores

        int maxCantCompProv=0;//maxima cantidad comprada
        int provCantMax;
        int numProdMax;

        while(numProv==numProvAct){

            monto=cant*precU;
            if (monto>maxMonto){
                maxMonto=monto;
            }

            if (tFact=='A'){
                totFactA+=monto;
            } else if (tFact=='B'){
                totFactB+=monto;
            } else {
                totFactC+=monto;
            }

            if (mm==8){
                if(bMinMon==0){
                    montoMinAgoProv=monto;
                    prodMinAgoProv=numProd;
                } else if(monto<montoMinAgoProv){
                    montoMinAgoProv=monto;
                    prodMinAgoProv=numProd;
                } 
            }

            contCompProv++;

            if (cant>maxCantCompProv){
                maxCantCompProv=cant;
                provCantMax=numProvAct;
                numProdMax=numProd;
            }


            //Vuelvo a pedir los datos
            cout << "\n---------------------------------------------" << endl;
            cout << "\nNúmero de proveedor: ";
            cin >> numProv;
            if(numProv!=0){
                cout << "\nDía: ";
                cin >> dd;

                cout << "\nMes: ";
                cin >> mm;

                cout << "\nTIPO DE FACTURA" << endl;
                cout << " --> (A) - Responsable Inscripto." << endl;
                cout << " --> (B) - Consumidor Final." << endl;
                cout << " --> (C) - Monotributo." << endl;
                cout << "Ingrese tipo de factura: " << endl;
                cin >> tFact;

                cout << "\nNúmero de producto: ";
                cin >> numProd;

                cout << "\nCantidad comprada: ";
                cin >> cant;

                cout << "\nPrecio unitario (AR$): ";
                cin >> precU;
            }
        }

        cout << "\n===================================================" << endl;
        cout << "\nEl mayor monto registrado al proveedor " << numProvAct << " fue de " << maxMonto << " AR$." << endl;
        cout << "\nAl proveedor " << numProvAct << " se le realizaron " << contCompProv << " compras." << endl;
        cout << "\n===================================================" << endl;

        totAnualFactA+=totFactA;
        totAnualFactB+=totFactB;
        totAnualFactC+=totFactC;

        if (bminAgo==0){
            montoMinAgo=montoMinAgoProv;
            prodMinAgo=prodMinAgoProv;
        } else if (montoMinAgoProv<montoMinAgo) {
            montoMinAgo=montoMinAgoProv;
            prodMinAgo=prodMinAgoProv;
        }

        if (maxCantCompProv>maxCantComp){
            maxCantComp=maxCantCompProv;
            provCantMaxGlobal=provCantMax;
            numProdMaxGlobal=numProdMax;
        }

    }
    cout << "\n===================================================" << endl;
    cout << "\n --> La inversión total anual en FACTURA A fue de: " << totAnualFactA << " AR$." << endl;
    cout << " --> La inversión total anual en FACTURA B fue de: " << totAnualFactB << " AR$." << endl;
    cout << " --> La inversión total anual en FACTURA C fue de: " << totAnualFactC << " AR$." << endl;
    cout << "\n===================================================" << endl;

    cout << "\nLa menor compra realizada en el mes de agosto fue de " << montoMinAgo << " adquiriendo el producto numero "<< prodMinAgo <<endl;
    cout << "\n===================================================" << endl;

    cout << "\nEl numero de producto con mayor cantidad comprada en una sola compra es el " << numProdMaxGlobal << " adquirido por el proveedor "<< provCantMaxGlobal << "." <<endl;
    cout << "\n===================================================" << endl;



}