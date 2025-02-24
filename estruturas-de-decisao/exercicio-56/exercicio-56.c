// SÍNTESE
//     ENTRADA: numA, numB e numC (int)
//     PROCESSAMENTO: imprime o maior número
//     SAÍDA: menor número

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
        printf("%d é o maior ", numA);
    }

    if(numB > numA && numB > numC) {
        printf("%d é o maior", numB);
    }

    if(numC > numB && numC > numA) {
        printf("%d é o maior", numC);
    }

}