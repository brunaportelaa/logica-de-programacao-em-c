// SÍNTESE
//     ENTRADA: num1 (int)
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

int main() {

    int num;
    
    printf("Informe o valor de um número inteiro: \n");
    scanf("%d", &num);

    if( num % 2 == 0) {
        printf("Este número é PAR\n");
    } else {
        printf("Este número é ÍMPAR\n");
    }

    if( num > 0 ) {
        printf("Este número é POSITIVO\n");
    } else {
        if (num == 0) {
            printf("Este número é ZERO\n");
        } else {
            printf("Este número é NEGATIVO\n");
        }
    }
}