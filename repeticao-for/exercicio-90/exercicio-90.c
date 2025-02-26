// SÍNTESE
//     ENTRADA: -
//     PROCESSAMENTO: imprime os números múltiplos de 7 entre 0 e 1000
//     SAÍDA: números múltiplos de 7 entre 0 e 1000

#include <stdio.h>

int main() {

    int i;

    for( i=0; i<1000; i++) {
        if( i % 7 == 0 ) {
            printf("%d, ", i);
        }
    }

}