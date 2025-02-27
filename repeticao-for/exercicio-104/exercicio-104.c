// SÍNTESE
//     ENTRADA: fator1 e fator2 (int)
//     PROCESSAMENTO: calcula o produto de dois números inteiros sem utilizar o operador de multiplicação
//     SAÍDA: produto (int)

#include <stdio.h>

int main() {


    int fator1;
    int fator2;
    int produto = 0;
    int i;

    printf("Informe o fator 1:\n");
    scanf("%d", &fator1);

    printf("Informe o fator 2:\n");
    scanf("%d", &fator2);

    for ( i = fator2; i > 0; i-- )
    {
        produto += fator1;
    }
    
    printf("%d x %d = %d\n", fator1, fator2, produto);

}