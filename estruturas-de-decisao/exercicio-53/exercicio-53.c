// SÍNTESE
//     ENTRADA: numA, numB e numC (int)
//     PROCESSAMENTO: verifica qual número é maior e imprime os números em ordem decrescente;
//     SAÍDA: numA, numB e numC (int)

#include <stdio.h>

int main() {

    int numA;
    int numB;
    int numC;

    printf("Insira o número A: \n");
    scanf("%d", &numA);

    printf("Insira o número B: \n");
    scanf("%d", &numB);

    printf("Insira o número C: \n");
    scanf("%d", &numC);

    if(numA > numB && numA > numC) {
        printf("%d ", numA);

        if(numB > numC) {
            printf("%d ", numB);
            printf("%d", numC);
        } else {
            printf("%d ", numC);
            printf("%d ", numB);
        }
    }

    if(numB > numA && numB > numC) {
        printf("%d ", numB);

        if(numA > numC) {
            printf("%d ", numA);
            printf("%d ", numC);
        } else {
            printf("%d ", numC);
            printf("%d ", numA);
        }
    }

    if(numC > numB && numC > numA) {
        printf("%d ", numC);

        if(numA > numB) {
            printf("%d ", numA);
            printf("%d ", numB);
        } else {
            printf("%d ", numB);
            printf("%d ", numA);
        }
    }
        
    }