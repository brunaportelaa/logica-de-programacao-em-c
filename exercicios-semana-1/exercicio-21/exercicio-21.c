// SÍNTESE
//     ENTRADA: valor_um (int) e valor_dois (int)
//     PROCESSAMENTO: calcula o cubo e o quadrado da soma dos valores um e dois
//     SAÍDA: quadrado (int), cubo (int)

#include <stdio.h>

int main() {

    int valor_um;
    int valor_dois;
    int soma;
    int quadrado_um;
    int quadrado_dois;
    
    printf("-----CALCULE A SOMA DE DOIS QUADRADOS-------\n");

    printf("Insira um número inteiro: \n");
    scanf("%d", &valor_um);

    printf("Insira um número inteiro: \n");
    scanf("%d", &valor_dois);

    quadrado_um = valor_um * valor_um;
    quadrado_dois = valor_dois * valor_dois;
    soma = quadrado_um + quadrado_dois;

    printf("%d ao quadrado mais %d ao quadrado é igual a: %d\n", valor_um, valor_dois, soma);

}