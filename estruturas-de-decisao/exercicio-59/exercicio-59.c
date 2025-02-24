// SÍNTESE
//     ENTRADA: num (int)
//     PROCESSAMENTO: verifica se o número é par, ímpar, positivo, negativo ou zero
//     SAÍDA: printf com a classificação do número

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