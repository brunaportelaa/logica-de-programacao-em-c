// SÍNTESE
//     ENTRADA: numero_um (inteiro) e numero_dois (inteiro)
//     PROCESSAMENTO: somar os dois valores
//     SAÍDA: soma (inteiro)

#include <stdio.h>

int main() {
    int numero_um;
    int numero_dois;
    int soma; 

    printf("Somando dois números inteiros:\n");

    printf("Forneça o valor número um:\n");
    scanf("%d", &numero_um);

    printf("Forneça o valor número dois:\n");
    scanf("%d", &numero_dois);

    soma = numero_um + numero_dois;
    
    printf("O valor total da soma é: %d\n", soma);
}