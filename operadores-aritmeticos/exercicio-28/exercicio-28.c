// SÍNTESE
//     ENTRADA: numeroN (int)
//     PROCESSAMENTO: inverter a ordem dos algarismos de N
//     SAÍDA: numeroM (int)

#include <stdio.h>

int main() {

    int numeroN;
    int numeroM;
    
    printf("-----INVERTENDO NÚMEROS------\n");

    printf("Forneça um número contendo 3 algarismos: \n");
    scanf("%d", &numeroN);

    numeroM = ((numeroN % 10) * 100)  + (((numeroN % 100) / 10)* 10)  + ((numeroN % 1000) / 100);

    printf("O número invertido é: %d\n", numeroM);

}