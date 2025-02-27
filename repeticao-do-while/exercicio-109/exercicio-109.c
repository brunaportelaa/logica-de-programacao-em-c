// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>
#define SENTINELA 9999

int main() {

    int x;
    int pares = 0;
    int impares = 0;

    while (x != SENTINELA) {

        printf("Insira um número (digite 9999 se quiser finalizar o programa): \n");
        scanf("%d", &x);

        if (x != SENTINELA)
        {
            if ( x % 2 == 0 ) {
                pares ++;
            } else {
                impares++;
            }

        }

    } 

    printf("Você enviou %d números pares e %d números ímpares", pares, impares);

}