// SÍNTESE
//     ENTRADA: tempo (float), velocidada_media (float)
//     PROCESSAMENTO: cálculo da distância percorrida; cálculo da quantidade de litros usados, considerando 12 km/l
//     SAÍDA: litros_usados (float)

#include <stdio.h>

#define PI 3.14159

int main() {

    float tempo;
    float velocidade_media;
    float distancia;
    float km_por_litro = 12;
    float litros_usados;

    printf("-----CALCULE O GASTO DE COMBUSTÍVEL-------\n");

    printf("Forneça o tempo decorrido na viagem:\n");
    scanf("%f", &tempo);

    printf("Forneça a velocidade média da viagem:\n");
    scanf("%f", &velocidade_media);

    distancia = tempo * velocidade_media;

    printf("A distância percorrida foi de: %f\n", distancia);

    litros_usados = distancia / km_por_litro;

    printf("A quantidade de combustível gasta, em litros: %f\n", litros_usados);
    
}