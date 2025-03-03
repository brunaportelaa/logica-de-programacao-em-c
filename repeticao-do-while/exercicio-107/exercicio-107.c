// SÍNTESE
//     ENTRADA: número inteiro
//     PROCESSAMENTO: identificar o maior número inserido
//     SAÍDA: maior número inserido

#include <stdio.h>
#define SENTINELA 9999

int main() {

    int x;
    int maximo = 0;


    do
    {
        printf("Insira um número (digite 9999 se quiser finalizar o programa): \n");
        scanf("%d", &x);

        if ( x > maximo ) {
            maximo = x;
        }

        printf("O maior número inserido até agora é: %d\n", maximo);

    } while (x != SENTINELA);
    
    printf("Programa encerrado");


}