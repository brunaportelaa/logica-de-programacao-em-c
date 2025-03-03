// SÍNTESE
//     ENTRADA: número a ser dividido por 2
//     PROCESSAMENTO: dividir o número por 2 até que o quociente seja menor que 1
//     SAÍDA: quantidade de divisões efetuadas e quociente atual

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