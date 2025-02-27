// SÍNTESE
//     ENTRADA:
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

int main() {

    int x = 1;
    int soma = 0;

    while (x < 11)
    {

        soma += x;
        x++;

        printf("X é: %d. A soma é: %d\n", x, soma);

    }
    
    printf("A soma dos números de 1 a 10 é: %d\n", soma);


}