// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>
#define MASSA_MINIMA 0.05
#define MASSA_INICIAL 50.0
#define EPSILON 0.001

int main() {

    int i;
    float massa;
    int tempo = 0;

    printf("Por favor, informe a massa, em gramas.\n");
    scanf("%f", &massa);

    for ( i = massa; i > 0.05; i-- )
    {
        massa /= 2;
        tempo += 50;

        printf("Massa: %fg; Tempo: %ds\n", massa, tempo);
    }
    
}