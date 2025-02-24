// SÍNTESE
//     ENTRADA: num1, num2 (int)
//     PROCESSAMENTO: verifica qual é o maior e qual é o menor número
//     SAÍDA: printf com o maior e o menor número

#include <stdio.h>

int main() {

    int num1;
    int num2;
    
    printf("Informe o valor de um número inteiro: \n");
    scanf("%d", &num1);

    printf("Informe o valor de outro número inteiro: \n"); 
    scanf("%d", &num2);

    if( num1 > num2 ) {
        printf("O maior número é %d e o menor número é %d\n", num1, num2);
    } else {
        printf("O maior número é %d e o menor número é %d\n", num2, num1);
    }

}