// SÍNTESE
//     ENTRADA: raio (float) e altura (float)
//     PROCESSAMENTO: cálculo do volume
//     SAÍDA: volume (float)

#include <stdio.h>

#define PI 3.14159

int main() {

    float raio;
    float altura;
    float volume;

    printf("-----CALCULE O VOLUME DA LATA DE ÓLEO-------\n");

    printf("Forneça o raio da lata de óleo:\n");
    scanf("%f", &raio);

    printf("Forneça a altura da lata de óleo:\n");
    scanf("%f", &altura);

    volume = PI * (raio * raio) * altura;
    
    printf("O volume da lata de óleo é: %f\n", volume);
}