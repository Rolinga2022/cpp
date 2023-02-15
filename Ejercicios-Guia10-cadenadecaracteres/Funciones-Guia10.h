
//Valida si la cadena esta formada por una sola palabra
bool es_Palabra (char vector[30]){
    int resultado=1;
    for (int i=0; i<30; i++){
        if(vector[i]==' '){
            resultado = 0;
        }
    }
    if (resultado){
        return true;
    } else {
        return false;
    }
}




