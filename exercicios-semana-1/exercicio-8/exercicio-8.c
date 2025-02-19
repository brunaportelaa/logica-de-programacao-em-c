// SÍNTESE
//     ENTRADA: base(float) e altura(float)
//     PROCESSAMENTO: cálculo da área
//     SAÍDA: área(float)

#include <stdio.h>

int main(){

    float base;
    float altura;
    float area;

    printf("Calcule a área do triângulo:\n");

    printf("Forneça o valor da base do triângulo:\n");
    scanf("%f", &base);

    printf("Forneça o valor da altura do triângulo:\n");
    scanf("%f", &altura);

    area = ( base * altura ) / 2;

    printf("A área do triângulo é: %.2f", area);
}

