// SÍNTESE
//     ENTRADA: -
//     PROCESSAMENTO: somar os números 3, 9, 27, 81, 243, 729, 2187, 6561
//     SAÍDA: soma total

#include <stdio.h>
#define VALOR_MAX 6561
#define RAZAO 3;

int main() {

    int x = 3;
    int soma = 0;

    while (soma <= VALOR_MAX) {
        soma += x;
        x *= RAZAO;
        printf("Termo: %d\n", x);
    }

    printf("Soma total: %d\n", soma);

}