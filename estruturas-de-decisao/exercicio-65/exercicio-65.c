

// SÍNTESE
//     ENTRADA: nota1, nota2 (int)
//     PROCESSAMENTO: verifica se ambas as notas são maiores que 5
//     SAÍDA: printf com a situação do aluno

#include <stdio.h>

#define NOTA_DE_CORTE 5

int main() {

    int nota1;
    int nota2;
    
    printf("Informe a nota 1: \n");
    scanf("%d", &nota1);

    printf("Informe a nota 2: \n");
    scanf("%d", &nota2);

    if( nota1 > NOTA_DE_CORTE && nota2 > NOTA_DE_CORTE) {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }

}