// SÍNTESE
//     ENTRADA: numero inteiro
//     PROCESSAMENTO: somar os números inseridos e calcular a média
//     SAÍDA: soma e média dos números inseridos

#include <stdio.h>
#define SENTINELA 9999

int main() {

    int x;
    int soma = 0;
    float media = 0;
    int counter = 0;

    do
    {
        printf("Insira um número (digite 9999 se quiser finalizar o programa): \n");
        scanf("%d", &x);

        soma += x;
        counter++;
        media = soma / counter;

        printf("A soma dos números inseridos é: %d\n", soma);
        printf("A média dos números inseridos é: %.2f\n", media);

    } while (x != 9999);
    
    printf("Programa encerrado");


}