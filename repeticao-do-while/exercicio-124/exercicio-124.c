// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

#define PESO_NOTA_1 2
#define PESO_NOTA_2 2
#define PESO_NOTA_3 3

int main() {

    float nota1;
    float nota2;
    float nota3;
    float media;
    int matricula;
    int aprovados = 0;
    int reprovados = 0;
    int alunos = 0;

    while (matricula != 9999)
    {
        printf("Informe a matrícula (informe 9999 para encerrar o programa): \n");
        scanf("%d", &matricula);

        if (matricula != 9999)
        {
            alunos++;

            printf("Informe a nota 1: \n");
            scanf("%f", &nota1);
    
            printf("Informe a nota 2: \n");
            scanf("%f", &nota2);
    
            printf("Informe a nota 3: \n");
            scanf("%f", &nota3);
    
            media = ( nota1 * PESO_NOTA_1 + nota2 * PESO_NOTA_2 + nota3 * PESO_NOTA_3 ) / ( PESO_NOTA_1 + PESO_NOTA_2 + PESO_NOTA_3 );
            printf("A média ponderada das notas é de: %.2f\n", media);
    
            if (media >= 5)
            {
                printf("APROVADO! \n");
                aprovados++;
            } else {
                printf("REPROVADO! \n");
                reprovados++;
            }   
        }
    }

    printf("Total de alunos: %d \n", alunos);
    printf("Total de aprovados: %d \n", aprovados);
    printf("Total de reprovados: %d \n", reprovados);
    
}