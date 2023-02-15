#include <iostream>
using namespace std;
//Prograama para empresas de camiones
int main() {
    cout << "\n===========LOTE DE CARGA===========" << endl;
    
    //Variable
    int camiones[30];//Vector que almacena cada camion
    int choferes[30];//Vector que almacena a cada chofer

    //Egreso e ingreso de datos
    cout << "\n--------Carga de camiones y choferes--------" << endl;
    for (int i=0; i<30; i++){
        camiones[i]=i+1;
        cout << "\nIngrese el código de chofer asignado al número de camión " << i+1 <<": ";
        cin >> choferes[i];
        cout << "\n--------------------------------------------" << endl;
    }


    cout << "\n===========LOTE DE PROCESO===========" << endl;
    //Variables
    int dd;//dia
    int dias[31];//Vector que guarda los 31 dias del mes(idealmente)
    for (int i=0; i<31; i++){
        dias[i]=i+1;
    }

    int cod_Chofer;//codigo de chofer que se almacena tmb en el vector choferes

    int km_Rec;//km recorridos
    int piezas_Rotas;

    int bmin=0;//bandera para el minimo de piezas rotas
    int min_Cant_PR[31];//Minima cantidad de piezas rotas
    for (int i=0; i<31; i++){
        min_Cant_PR[i]=0;
    }
    int min_Cod_Chofer[31];
    for (int i=0; i<31; i++){
        min_Cod_Chofer[i]=0;
    }

    int km_Totales[30];//Acumuladores de km totales recorridos
    for (int i=0; i<30; i++){
        km_Totales[i]=0;
    }

    int roturas[30][31];//Matriz que almacena la suma de las roturas diarias de cada chofer
    //Inicializo la matriz de acumuladores
    for (int f=0; f<30; f++){
        for (int c=0; c<31; c++){
            roturas[f][c]=0;//en cada posicion de la matriz se inicia el acumulador de piezas rotas
        }
    }



    //Pido los datos y los cargo
    cout << "\n --> Día (1-31) / (0)Salir: ";
    cin >> dd;
    cout << "\n --> Código de chofer: ";
    cin >> cod_Chofer;
    cout << "\n --> Km recorridos: ";
    cin >> km_Rec;
    cout << "\n --> Número de piezas rotas: ";
    cin >> piezas_Rotas; 

    while (dd!=0){
         
        for(int i=0; i<31; i++){
            if(dd==dias[i]){
                if(bmin==0){
                    min_Cant_PR[i]=piezas_Rotas;
                    min_Cod_Chofer[i]=cod_Chofer;
                } else if (piezas_Rotas < min_Cant_PR[i]){
                    min_Cant_PR[i]=piezas_Rotas;
                    min_Cod_Chofer[i]=cod_Chofer;
                }
            }
        }

        for (int i=0; i<30; i++){
            if(cod_Chofer==choferes[i]){
                km_Totales[i]+=km_Rec;
            }
        }

        roturas[cod_Chofer-1][dd-1]+=piezas_Rotas;//atento al indice que le paso, es el valor menos uno.




        //Vuelvo a pedir los datos
        cout << "\n--------------------------------------------" << endl;
        cout << "\n --> Día (1-31) / (0)Salir: ";
        cin >> dd;
        if(dd!=0){
            cout << "\n --> Código de chofer: ";
        cin >> cod_Chofer;
        cout << "\n --> Km recorridos: ";
        cin >> km_Rec;
        cout << "\n --> Número de piezas rotas: ";
        cin >> piezas_Rotas;    
         }
    }
    //Para mostrar el chofer con menor cantidad de piezas rotas por dia
    cout << "\n------Choferes con menor cantidad de piezas rotas segun el dia------" << endl;
    for (int i=0; i<31; i++){
        if(min_Cant_PR[i]){
            cout << "\nEl día " << dias[i] << ", el chofer '" << min_Cod_Chofer[i] << "' tuvo la menor cantidad de piezas rotas." << endl;
            cout << "\n--------------------------------------------" << endl;
        }
    }

    //Para mostrar el maximo recorrido y su chofer
    int max_Km_Tot=0;
    int max_Chofer;
    int max_Camion;
    for (int i=0; i<30; i++){
        if (km_Totales[i]>max_Km_Tot){
            max_Km_Tot=km_Totales[i];
            max_Chofer=choferes[i];
            max_Camion=camiones[i];
        }
    }
    cout << "\n------Mayor recorrido mensual en Km------" << endl;
    cout << "\nEl camión que más Km recorrió fue el número '" << max_Camion << "' con un total de '" << max_Km_Tot << "', y fue conducido por el chofer '" << max_Chofer << "'." << endl;
    cout << "\n--------------------------------------------" << endl;

    //Con el siguiente de codigo, muestro la matriz "roturas" con el formato de una matriz[n][m]
    for (int f=0; f<30; f++){
        for (int c=0; c<31; c++){ 
                cout << roturas[f][c]<< " ";  //" " -->Para separar los elementos o las columnas de la matriz 
            }
        cout<<endl;//para separar las filas de la matriz
    }
     
    for (int f=0; f<30; f++){
        int suma_Piez_RotasQ1=0;//Acumulados de piezas rotas para la primera quincena
        int suma_Piez_RotasQ2=0;//Acumulador de piezas rotas para la segunda quincena
        int total_Roturas;//Total de roturas
        int promedio_Q1;
        int promedio_Q2;
        for (int c=0; c<31; c++){
            if (c<15){
                suma_Piez_RotasQ1+=roturas[f][c];
            } else {
                suma_Piez_RotasQ2+=roturas[f][c];
            }
        }
        total_Roturas=suma_Piez_RotasQ1+suma_Piez_RotasQ2;
        promedio_Q1=suma_Piez_RotasQ1/total_Roturas;
        promedio_Q2=suma_Piez_RotasQ2/total_Roturas;

        cout << "\n--------------------------------------------" << endl;
        cout << "\nCodigo de chofer" << "   " << "Promedio Q1" << "   " << "Promedio Q2" << endl;
        cout << "     " << choferes[f] <<  "               " << promedio_Q1 << "               "<< promedio_Q2 << endl;
        cout << "\n--------------------------------------------" << endl;
    }



    
    

}