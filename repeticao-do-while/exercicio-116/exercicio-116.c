// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>
#define DIVISOR 2.0

int main() {

    float quociente;
    int qtdDivisoes = 0;

    printf("Informe um número a ser dividido por %.0f \n", DIVISOR);
    scanf("%f", &quociente);

    

    while (quociente > 1)
    {
        quociente /= DIVISOR;
        qtdDivisoes++;
        printf("%d divisões foram efetuadas e o quociente atual é %.2f\n", qtdDivisoes, quociente);
    }
    




}