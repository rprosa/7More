#include <stdio.h>
double pi =  3.141592;

double comprimento_circ(int raio){

    double comprimento_circ_res = (2 * pi)*raio;

    return comprimento_circ_res;    
}

int main(){
    double resposta = comprimento_circ(5);
    printf("Comprinto é: %lf",  resposta);
}
