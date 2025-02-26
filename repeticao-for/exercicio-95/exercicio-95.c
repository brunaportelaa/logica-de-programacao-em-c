// SÍNTESE
//     ENTRADA: alunos
//     PROCESSAMENTO: calcula a média de idade dos alunos com menos de 170cm de altura e a média de altura dos alunos com mais de 20 anos
//     SAÍDA: média de idade dos alunos com menos de 170cm de altura e média de altura dos alunos com mais de 20 anos

#include <stdio.h>

int main() {
    int alunos[45][2] = {
        {19, 178}, {21, 165}, {23, 172}, {16, 181}, {25, 190}, {18, 160}, {22, 175}, {17, 169}, {20, 185}, {15, 155}, {24, 192}, {21, 178}, {19, 165}, {23, 170}, {16, 188}, {25, 194}, {18, 157}, {22, 179}, {17, 162}, {20, 180}, {15, 150}, {24, 200}, {21, 176}, {19, 168}, {23, 173}, {16, 189}, {25, 191}, {18, 159}, {22, 174}, {17, 166}, {20, 182}, {15, 152}, {24, 195}, {21, 177}, {19, 164}, {23, 171}, {16, 187}, {25, 193}, {18, 158}, {22, 178}, {17, 163}, {20, 183}, {15, 151}, {24, 198}, {21, 180}
    };
    int i;
    int alunosMenos170Cm = 0;
    int alunosMais20Anos = 0;
    int somaIdadeAlunosMenos170Cm;
    int somaAlturaAlunosMais20Anos;

    for ( i=0; i<45; i++ ){
        if ( alunos[i][0] > 20){
            alunosMais20Anos++;
            somaAlturaAlunosMais20Anos += alunos[i][1];
        }
        if ( alunos[i][1] < 170){
            alunosMenos170Cm++;
            somaIdadeAlunosMenos170Cm += alunos[i][0];
        }
    }

    printf("A idade média dos alunos com menos de 170cm de altura é: %d\n", somaIdadeAlunosMenos170Cm/alunosMenos170Cm);
    printf("A altura média dos alunos com mais de 20 anos é: %d\n", somaAlturaAlunosMais20Anos/alunosMais20Anos);
}