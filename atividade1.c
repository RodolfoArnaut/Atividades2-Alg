#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main(){
    float nota1;
    float nota2;
    float resultado;

    setlocale(LC_ALL, "Portuguese");

 
    printf("Digite a nota 1 ");
    scanf("%f", &nota1);
    
    printf("Digite a nota 2 ");
    scanf ("%f", &nota2);

    resultado = (nota1 + nota2) / 2;
    printf("\nA media final é: %0.2f", resultado);

    
    printf("\nPressione qualquer tecla");
    getch();

    return 0;
}
