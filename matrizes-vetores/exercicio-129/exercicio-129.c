// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

int main() {

    int i;
    int j;
    int k;
    int vetor[20];
    int vetor2[20];

    for ( i = 0; i < 20; i++)
    {
        printf("Insira o item %d do vetor: \n", i);
        scanf("%d", &vetor[i]);
    }

    i = 19;

    for ( j = 0; j < 10; j++)
    {
        vetor2[j] = vetor[i];
        i--;
    }

    i = 9;

    for ( j = 10; j < 20; j++)
    {
        vetor2[j] = vetor[i];
        i--;
    }

    for ( k = 0; k < 20; k++)
    {
        printf("%d, \n", vetor2[k]);
    }
    
}