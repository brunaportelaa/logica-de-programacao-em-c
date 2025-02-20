// SÍNTESE
//     ENTRADA: valor (int)
//     PROCESSAMENTO: calcula o cubo e o quadrado do valor
//     SAÍDA: quadrado (int), cubo (int)

#include <stdio.h>

int main() {

    int valor;
    int quadrado;
    int cubo;
    
    printf("-----CALCULE O QUADRADO E O CUBO DE UM VALOR-------\n");

    printf("Insira um número inteiro: \n");
    scanf("%d", &valor);

    quadrado = valor * valor;
    cubo = quadrado * valor;

    printf("%d ao quadrado é: %d\n", valor, quadrado);
    printf("%d ao cubo é: %d\n", valor, cubo);

}