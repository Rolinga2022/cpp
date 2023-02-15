#include <iostream>
using namespace std;

//Programa para calcular presupuesto de piso laminado

int main(){

    cout << "\nBIENVENIDO A LA CALCULADORA DE PRESUPUESTO DE PISO LAMINADO";
    //Variables

    //Cantidad de metros cuadrados segun calidad
    int mMedia;
    int mAlta; 

    //Precios segun calidad
    double pMedia = 35.5;
    double pAlta = 55.3;

    //Impuesto
    const double iva = 0.21;

    //Total presupuestado con y sin iva
    double totalSinIva;
    double totalConIva;

    //Validez del presupuesto
    int valPresup = 30;

    //Egresos

    cout << "\n¿Cuántos metros cuadrados querés instalar con calidad media? " << endl;
    //Ingreso dato
    cin >> mMedia;

    cout << "\n¿Cuántos metros cuadrados querés instalar con calidad alta? " << endl;
    //Ingreso dato
    cin >> mAlta;
    cout << "\n=========================================================================================" << endl;

    //Proceso
    totalSinIva = (mMedia*pMedia+mAlta*pAlta);
    totalConIva = (1+iva)*(mMedia*pMedia+mAlta*pAlta);

    //Egreso final
    cout << "\nMetros cuadrados de calidad MEDIA pedidos:  " << mMedia << " m2." << endl;
    cout << "\nMetros cuadrados de calidad ALTA pedidos:  " << mAlta << " m2." << endl; 
    cout << "\n=========================================================================================" << endl;
    cout << "\nEl monto total SIN IVA es de: " << totalSinIva << " euros." << endl;
    cout << "\n=========================================================================================" << endl;
    cout << "\nEl monto total con IVA incluido es de: " << totalConIva << " euros. (Válido por "<< valPresup << " dás)." << endl; 
    cout << "\n=========================================================================================" << endl;
}