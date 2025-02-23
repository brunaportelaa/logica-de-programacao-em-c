// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

int main() {

    int numA;
    int numB;
    
    printf("Insira o número A: \n");
    scanf("%d", &numA);

    printf("Insira o número B: \n");
    scanf("%d", &numB);

    if(numA > numB) {
        printf("Os números não são iguais.");
        printf("%d > %d\n", numA, numB);
    } else {
        if (numB > numA) {
            printf("Os números não são iguais.");
        printf("%d > %d\n", numB, numA);
        } else {
            printf("Os números são iguais.");
        }   
    }
}