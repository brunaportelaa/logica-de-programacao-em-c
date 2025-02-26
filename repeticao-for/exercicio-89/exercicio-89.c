// SÍNTESE
//     ENTRADA: numeros[]
//     PROCESSAMENTO: conta os números negativos e soma os números positivos
//     SAÍDA: quantidade de números negativos e soma dos números positivos

#include <stdio.h>

int main() {

    int numeros[] = {-23, 45, -12, 67, -89, 34, -56, 78, -90, 12,  5, -34, 89, -67, 23, -11, 99, -100, 54, -76, 32, -43, 88, -22, 19, -77, 61, -50, 7, -8,  83, -29, 41, -63, 74, -91, 36, -15, 97, -62, 10, -48, 55, -33, 28, -85, 66, -72, 20, -40};
    int i;
    int soma = 0;
    int contadorNegativos = 0;

    for( i=0; i<50; i++) {
        if ( numeros[i]>0 ) {
            soma += numeros[i];
        } else {
            contadorNegativos += 1;
        }
    }

    printf("Temos %d números negativos.\n", contadorNegativos);
    printf("A soma dos números positivos é: %d\n", soma);

}