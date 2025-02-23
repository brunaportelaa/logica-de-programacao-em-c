// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

int main() {

    int nota1;
    int nota2;
    int nota3;
    int media;
    
    printf("Insira a nota 1: \n");
    scanf("%d", &nota1);

    printf("Insira a nota 2: \n");
    scanf("%d", &nota2);

    printf("Insira a nota 3: \n");
    scanf("%d", &nota3);

    media = ( nota1 + nota2 + nota3 ) / 3;

    if (media >= 7 ) {
        printf("Aprovado.");
    } else {
        if ( media < 7 && media >= 4) {
            printf("Em prova final.");
        } else {
            printf("Reprovado.");
        }
    }

}