// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

int main() {

    int i;
    int num;
    int soma = 0;
    int media;
    int maiorNumero = 0;
    int menorNumero = 9999999;

    for( i = 0; i < 10; i++ ){
        printf("Informe um número inteiro \n");
        scanf("%d", &num);
        soma += num;
        
        if( num > maiorNumero){
            maiorNumero = num;
        }

        if (num < menorNumero){
            menorNumero = num;
        }
        
    }

    media = soma / 10;

    printf("Maior número: %d\n", maiorNumero);
    printf("Menor número: %d\n", menorNumero);
    printf("Média: %d\n", media);
}