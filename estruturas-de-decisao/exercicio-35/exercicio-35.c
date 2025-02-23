// SÍNTESE
//     ENTRADA: nota_port, nota_mat, nota_cg (float)
//     PROCESSAMENTO: calcula a média e exibe se o candidato foi aprovado ou reprovado (média mínima 7 && nenhuma nota abaixo de 5)
//     SAÍDA: "Aluno aprovado" || "Aluno reprovado"

#include <stdio.h>
#define NOTA_DE_CORTE 5.0

int main() {

    float nota_port;
    float nota_mat;
    float nota_cg;
    float media;
    
    printf("Informe a nota da prova de Português: \n");
    scanf("%f", &nota_port);

    printf("Informe a nota da prova de Matemática: \n");
    scanf("%f", &nota_mat);

    printf("Informe a nota da prova de Conhecimentos Gerais: \n");
    scanf("%f", &nota_cg);

    media = (nota_port + nota_mat + nota_cg) / 3;

    if( media > 7 && nota_port > NOTA_DE_CORTE && nota_mat > NOTA_DE_CORTE && nota_cg > NOTA_DE_CORTE) {
        printf("Aluno aprovado com média %.2f\n", media);
    } else {
        printf("Aluno reprovado");
    }
}