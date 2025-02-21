// SÍNTESE
//     ENTRADA: numA e numB (int)
//     PROCESSAMENTO: imprime o maior número
//     SAÍDA: numA ou numB (int)

#include <stdio.h>

int main() {

    int numA;
    int numB;
    
    printf("-----IMPRIMA O MAIOR NÚMERO------\n");

    printf("Insira um número: \n");
    scanf("%d", &numA);

    printf("Insira outro número: \n");
    scanf("%d", &numB);

    if(numA > numB) {
        printf("O maior número é: %d\n", numA);
    } else {
        printf("O maior número é: %d\n", numB);
    }

}