// SÍNTESE
//     ENTRADA: numA, numB e numC (int)
//     PROCESSAMENTO: imprime os números em ordem crescente
//     SAÍDA: numA, numB e numC (em ordem crescente)

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
    } else {
        if(numA + numB == numC) {
            printf("A soma de %d e %d é igual a %d", numA, numB, numC);
        } else {
            printf("A soma de %d e %d é menor que %d", numA, numB, numC);
        }
    }
}