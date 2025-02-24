// SÍNTESE
//     ENTRADA: nota1, nota2, nota3 (float)
//     PROCESSAMENTO: verifica qual é a maior nota e atribui pesos para as notas
//     SAÍDA: printf com as notas do aluno, média ponderada final e situação do aluno

#include <stdio.h>

int main() {

    float nota1;
    float nota2;
    float nota3;
    float peso_nota1;
    float peso_nota2;
    float peso_nota3;
    float media;
    
    printf("Informe a nota 1: \n");
    scanf("%f", &nota1);

    printf("Informe a nota 2: \n");
    scanf("%f", &nota2);

    printf("Informe a nota 3: \n");
    scanf("%f", &nota3);

    if(nota1 > nota2 && nota1 > nota3) {
        peso_nota1 = 4;
        peso_nota2 = 3;
        peso_nota3 = 3;
    } else {
        if (nota2 > nota3 && nota2 > nota1) {
            peso_nota2 = 4;
            peso_nota1 = 3;
            peso_nota3 = 3;
        } else {
            peso_nota3 = 4;
            peso_nota1 = 3;
            peso_nota2 = 3;
        }
    }

    media = ((peso_nota1 * nota1) + (peso_nota2 * nota2) + (peso_nota3 * nota3)) / (peso_nota1 + peso_nota2 + peso_nota3);

    printf("As notas do aluno foram: %.2f, %.2f e %.2f\n", nota1, nota2, nota3);
    printf("Média ponderada final: %.2f\n", media);
     
    if (media >= 5) {
        printf("APROVADO");
    } else {
        printf("REPROVADO");
    }
    

}