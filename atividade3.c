#include <stdio.h>

int main(){

    char carac;

    printf("Escolha um caracter ");
    scanf("%c", &carac);
    printf("Decimal: %i  Octal: %o Hexadecimal: %x Caractere: %c \n", carac, carac, carac, carac);
    
    printf("\n Pressione alguma tecla");
    getchar();

    return 0;


}