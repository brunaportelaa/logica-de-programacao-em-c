// SÍNTESE
//     ENTRADA: -
//     PROCESSAMENTO: imprime os números pares entre 85 e 907 e calcula a soma desses números
//     SAÍDA: números pares entre 85 e 907 e a soma desses números

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