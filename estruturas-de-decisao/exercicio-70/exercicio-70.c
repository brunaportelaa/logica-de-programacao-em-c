// SÍNTESE
//     ENTRADA: num (int)
//     PROCESSAMENTO: verifica se o número é par e retorna VERDADEIRO ou falso
//     SAÍDA: printf com o retorno

#include <stdio.h>

int main() {

    int num;
    
    printf("Informe um número inteiro: \n");
    scanf("%d", &num);

    if( num % 2 == 0 ) {
        printf("VERDADEIRO\n");
    } else {
        printf("FALSO\n");

    }
}