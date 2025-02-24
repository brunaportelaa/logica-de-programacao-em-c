// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

#define PESO_NOTA_1 3
#define PESO_NOTA_2 3
#define PESO_NOTA_3 4


int main() {

    float nota1;
    float nota2;
    float nota3;
    float media;
    int operacao;
    
    printf("Informe a nota 1: \n");
    scanf("%f", &nota1);

    printf("Informe a nota 2: \n");
    scanf("%f", &nota2);

    printf("Informe a nota 3: \n");
    scanf("%f", &nota3);

    printf("Digite 1 para média aritmética e 2 para média ponderada: \n");
    scanf("%d", &operacao);

    if ( operacao == 1 ) {
        media = ( nota1 + nota2 + nota3 ) / 3;
        printf("A média aritmética das notas é de: %.2f", media);
    } else {
        if ( operacao == 2) {
            media = ( nota1 * PESO_NOTA_1 + nota2 * PESO_NOTA_2 + nota3 * PESO_NOTA_3 ) / ( PESO_NOTA_1 + PESO_NOTA_2 + PESO_NOTA_3 );
            printf("A média ponderada das notas é de: %.2f", media);
        } else {
            printf("Por favor, informe um valor válido para a operação.\n");
        }
    }

}