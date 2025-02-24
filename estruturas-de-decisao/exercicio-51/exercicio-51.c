// SÍNTESE
//     ENTRADA: numA (int), numB (int);
//     PROCESSAMENTO: verifica qual número é maior e imprime o maior número;
//     SAÍDA: print do maior número;

#include <stdio.h>

int main() {

    int numA;
    int numB;
    
    printf("Insira o número A: \n");
    scanf("%d", &numA);

    printf("Insira o número B: \n");
    scanf("%d", &numB);

    if(numA > numB) {
        printf("O número maior é: %d\n", numA);
    } else {
        if (numB > numA) {
            printf("O número maior é: %d\n", numB);
        } else {
            printf("Os números são iguais.");
        }   
    }
}