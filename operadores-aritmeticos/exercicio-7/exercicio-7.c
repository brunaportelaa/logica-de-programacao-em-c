// SÍNTESE:
//      ENTRADA: raio (float)
//      PROCESSAMENTO: calcular a circunferência (float)
//      SAÍDA: area (float)

#include <stdio.h>

#define PI 3.14159

int main() {

    float area = 0;
    float raio = 0;

    printf("Calcule a área da circunferência:\n");
    printf("Forneça o raio da cicunferência:\n");
    scanf("%f", &raio);

    area = PI * (raio * raio);
    
    printf("A área da circunferência é: %f \n", area);
    
}