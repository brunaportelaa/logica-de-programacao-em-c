// SÍNTESE
//     ENTRADA: -
//     PROCESSAMENTO: calcula o produto dos números ímpares de 1 a 15
//     SAÍDA: produto dos números ímpares de 1 a 15

#include <stdio.h>

int main() {

    int i;
    int produto = 1;

    for ( i = 1; i <= 15; i++)
    {
        if (i % 2 != 0)
        {
            produto *= i;
        }
        
    }

    printf("Produto: %d\n", produto);
}