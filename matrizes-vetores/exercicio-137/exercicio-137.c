// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

int main() {

    int i;
    int vetor1[5] = { 1, 2, 3, 4, 5};
    int vetor2[5] = { 5, 6, 7, 8, 9};
    int vetor3[5];

    for ( i = 0; i < 5; i++)
    {
        vetor3[i] = vetor1[i] + vetor2[i];
    }

    printf("Conteúdo do vetor 2:\n");

    for ( i = 0; i < 5; i++)
    {
        printf("%d, ", vetor3[i]);
    }

}