// SÍNTESE
//     ENTRADA: num (int)
//     PROCESSAMENTO: decide se vai imprimir "F1" (N<=10), "F2" (N>10 && N <= 100) ou "F3" (N>100)
//     SAÍDA: "F1" || "F2" || "F3"

#include <stdio.h>

int main() {

    int numA;
    int numB;
    int numC;
    
    printf("Insira o número A: \n");
    scanf("%d", &numA);

    printf("Insira o número B: \n");
    scanf("%d", &numB);

    printf("Insira o número A: \n");
    scanf("%d", &numC);

    if(numA + numB > numC) {
        printf("A soma de %d e %d é maior que %d", numA, numB, numC);
    } else if(numA + numB == numC) {
        printf("A soma de %d e %d é igual a %d", numA, numB, numC);
    } else {
        printf("A soma de %d e %d é menor que %d", numA, numB, numC);
    }

}