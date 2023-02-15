//Libreria de funciones:

int sumar (int n1, int n2) /*type and name of function*/
{
    int resultado; // Declaration of varaible return

    resultado = n1 + n2; //operation

    return resultado; //return
}

float producto (float n1, int n2) {
    float resultado;
    resultado = n1 * n2;
    return resultado;
}

int mayor (int n1, int n2){
    int resultado;
    if(n1==n2){
        resultado = 0;
    } else if (n1>n2){
        resultado = n1;
    } else {
        resultado = n2;
    } 
    return resultado;
}

int par (int n1){
    int resultado;
    if(n1%2==0){
        resultado = 1;
    } else {
        resultado = 0;
    }
    return resultado;
}

int primo(int n1){
    
    int con;//contador para verificar condicion de primo
    int resultado;

    for (int i=1; i<=n1; i++){
        if(n1%i==0){
            con++;
        }
    }
    if (con==2){
        resultado=1;
    } else {
        resultado=0;
    }

    return resultado;
}

float pagos(float n1, int n2){
    float resultado;
    resultado = n1/n2;
    return resultado;
}

//Funcion con paramtreos/argumentos pasados por referencia
int sumaResta(int n1, int &n2)/*el simbolo & indica que es un argumento que va a compartir el espacion en memoria con el argumento que pase mi programa main*/
{

    int suma;
    
    suma=n1+n2;
    n2=n2-n1;
    return suma;

}

//La siguiente funcion es del tipo void, es decir, no retorna ninguna valor
void positivoNegativoCero(int n, int &v) {
    if (n==0){
        v=0;
    } else if (n>0){
        v=1;
    } else {
        v=-1;
    } // en la funcion anterior le asigno el proceso a la variable v
}