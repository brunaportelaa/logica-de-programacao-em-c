// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

int main() {

    int i;
    int soma = 0;

    for( i=85; i<907 ; i++) {
        if( i % 2 == 0 ) {
            printf("%d, \n", i);
            soma +=  i;
        }
    }

    printf("Valor da soma: %d", soma);

}