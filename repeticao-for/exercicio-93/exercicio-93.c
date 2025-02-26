// SÍNTESE
//     ENTRADA: -
//     PROCESSAMENTO: imprime a quantidade de grãos em cada casa do tabuleiro e o total de grãos somados
//     SAÍDA: quantidade de grãos em cada casa do tabuleiro e o total de grãos somados

#include <stdio.h>

int main() {

    long long int totalGraos = 0;
    long long int graosNaCasa = 1;
    int i;

    for( i=1; i<=64; i++ ){
        totalGraos += graosNaCasa;
        printf("Tem %lld grãos nesta casa do tabuleiro, e o total de grãos somados agora é de: %lld\n", graosNaCasa, totalGraos);
        graosNaCasa *= 2;
    }
}