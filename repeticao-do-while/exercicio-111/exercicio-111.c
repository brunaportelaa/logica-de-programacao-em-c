// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

int main() {

    int numAlunos;
    int idasRestaurante;
    float alunosMenos10 = 0.0;
    float alunos10A15 = 0.0;
    float alunosMais15 = 0.0;
    int counter = 0;


    printf("Quantos alunos compõem o grupo?\n");
    scanf("%d", &numAlunos);

    while (numAlunos > 0) {
        printf("Quantas vezes o aluno foi ao restaurante?\n");
        scanf("%d", &idasRestaurante);

        counter++;
        numAlunos--;

        if (idasRestaurante < 10)
        {
            alunosMenos10++;
            printf("Alunos que foram menos de 10x: %.2f\n", alunosMenos10);
        } else {
            if (idasRestaurante >= 10 && idasRestaurante <= 15)
            {
                alunos10A15++;
                printf("Alunos que foram menos de 10 a 15: %.2f\n", alunos10A15);
            } else {
                alunosMais15++;
                printf("Alunos que foram mais de 15x: %.2f\n", alunosMais15);
            }
            
        }
    }

    alunosMenos10 /= counter;
    printf("Média alunos que foram menos de 10x: %.2f\n", alunosMenos10);
    alunos10A15 /= counter;
    printf("Média alunos que foram menos de 10 a 15: %.2f\n", alunos10A15);
    alunosMais15 /= counter;
    printf("Média alunos que foram mais de 15x: %.2f\n", alunosMais15);

    printf("%.2f%% dos alunos foram ao restaurante menos de 10 vezes\n", alunosMenos10 * 100);
    printf("%.2f%% dos alunos foram ao restaurante entre 10 e 15 vezes\n", alunos10A15 * 100);
    printf("%.2f%% dos alunos foram ao restaurante mais de 15 vezes\n", alunosMais15 * 100);


}