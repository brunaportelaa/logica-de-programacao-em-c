// SÍNTESE
//     ENTRADA: valor_um (float) e valor_dois (float)
//     PROCESSAMENTO: calcula o cubo e o quadrado da soma dos valores um e dois
//     SAÍDA: quadrado (int), cubo (int)

#include <stdio.h>

int main() {

    float valor_um;
    float valor_dois;
    float media;
    
    printf("-----CALCULE A MÉDIA DE DOIS VALORES-------\n");
    printf("Insira um número: \n");
    scanf("%f", &valor_um);

    printf("Insira outro número: \n");
    scanf("%f", &valor_dois);

    media = (valor_um + valor_dois) / 2;

    printf("A média entre %.2f e %.2f é: %.2f\n", valor_um, valor_dois, media);

}