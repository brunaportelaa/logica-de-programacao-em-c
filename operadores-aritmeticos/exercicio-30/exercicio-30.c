// SÍNTESE
//     ENTRADA: matricula (int)
//     PROCESSAMENTO: extrair os dois primeiros dígitos (ano) e o terceiro dígito (semestre)
//     SAÍDA: ano_matricula (int) e semestre_matricula (int)

#include <stdio.h>

int main() {

    int matricula;
    int ano_matricula;
    int semestre_matricula;
    
    printf("-----Descubra o ano e semestre de matrícula do alino------\n");

    printf("Insira o código de matrícula do aluno: \n");
    scanf("%d", &matricula);

    ano_matricula = (matricula / 10000) + 2000;
    semestre_matricula = (matricula / 1000) % 10;

    printf("O aluno foi matriculado em %d, no %d semestre\n", ano_matricula, semestre_matricula);

}