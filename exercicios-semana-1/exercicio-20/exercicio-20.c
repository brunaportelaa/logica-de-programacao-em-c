// SÍNTESE
//     ENTRADA: valor_um (int) e valor_dois (int)
//     PROCESSAMENTO: calcula o cubo e o quadrado da soma dos valores um e dois
//     SAÍDA: quadrado (int), cubo (int)

#include <stdio.h>

int main() {

    int valor_um;
    int valor_dois;
    int soma;
    int quadrado;
    int cubo;
    
    printf("-----CALCULE O QUADRADO E O CUBO DE UMA SOMA-------\n");

    printf("Insira um número inteiro: \n");
    scanf("%d", &valor_um);

    printf("Insira um número inteiro: \n");
    scanf("%d", &valor_dois);

    soma = valor_um + valor_dois;

    printf("%d + %d ao quadrado é: %d\n", valor_um, valor_dois, quadrado);
    printf("%d + %d ao cubo é: %d\n",  valor_um, valor_dois, cubo);

}