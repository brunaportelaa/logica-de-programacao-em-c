// SÍNTESE
//     ENTRADA: -
//     PROCESSAMENTO: imprime o quadrado e o cubo dos números de 0 a 10
//     SAÍDA: quadrado e cubo dos números de 0 a 10

#include <stdio.h>

int main() {

    int i;

    for ( i = 0; i <= 10; i++)
    {
        printf("O quadrado de %d é %d\n", i, (i * i));
        printf("O cubo de %d é %d\n", i, (i * i * i));
    }
    

}