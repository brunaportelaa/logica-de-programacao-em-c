// SÍNTESE
//     ENTRADA: -
//     PROCESSAMENTO: calcular quantos anos são necessários para que Zé seja maior que Chico
//     SAÍDA: anos necessários para que Zé seja maior que Chico

#include <stdio.h>

int main() {

    float alturaChico = 1.5;
    float alturaZe = 1.1;
    int counter = 0;

    while (alturaChico > alturaZe)
    {
        alturaChico += 0.02;
        alturaZe += 0.03;
        counter++;

        printf("Passaram-se %d anos. Zé tem %.2fm e Chico tem %.2fm.\n", counter, alturaZe, alturaChico);
    }

    printf("Passaram-se %d anos. Zé agora é maior que Chico.\n", counter);
    

}