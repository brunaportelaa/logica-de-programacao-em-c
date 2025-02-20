// SÍNTESE
//     ENTRADA: velocidade_kmh (float)
//     PROCESSAMENTO: conversão de km/h para m/s
//     SAÍDA:  velocidade_ms (float)

#include <stdio.h>

int main() {

    float velocidade_kmh;
    float velocidade_ms;
    
    printf("-----VELOCIDADE KM/H >>> M/S------\n");

    printf("Insira a velocidade em km/h: \n");
    scanf("%f", &velocidade_kmh);

    velocidade_ms = velocidade_kmh / 3.6;

    printf("Velocidade em m/s: %.2f\n", velocidade_ms);

}