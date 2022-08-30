#include <stdio.h>

int main(){

    int distancia;
    int totalLitros;
    int resultado;

    printf("Digite a distancia percorrida ");
    scanf("%f", &distancia);
    printf("Digite seu gasto de combustivel ");
    scanf("%f", &totalLitros);
    

    resultado = (distancia / totalLitros);
    printf("O consumo medio eh: %.2f ", resultado);


    return 0;


}