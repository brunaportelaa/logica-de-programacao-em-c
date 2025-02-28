// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>
#define VALOR_MAX 6561
#define RAZAO 3;

int main() {

    int x = 3;
    int soma = 0;

    while (soma <= VALOR_MAX) {
        soma += x;
        x *= RAZAO;
    }

    printf("Soma total: %d\n", soma);

}