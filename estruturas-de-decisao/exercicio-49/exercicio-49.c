// SÍNTESE
//     ENTRADA: valorX, valorY e valorZ (int)
//     PROCESSAMENTO: verifica se é possível formar um triângulo e, se sim, classifica o triângulo
//     SAÍDA: printa se o triângulo pode ou não ser formado e, se sim, classifica o triângulo

#include <stdio.h>

int main() {

    int valorX;
    int valorY;
    int valorZ;
    
    printf("Insira o valor X:\n");
    scanf("%d", &valorX);

    printf("Insira o valor Y:\n");
    scanf("%d", &valorY);

    printf("Insira o valor X:\n");
    scanf("%d", &valorZ);

    if (valorX < valorY + valorZ && valorY < valorX + valorZ && valorZ < valorX + valorY) {
        printf("Triângulo formado!\n");
    } 
    
    if ( valorX == valorY && valorY == valorZ) {
        printf("Esse triângulo é EQUILÁTERO.\n");
    } else if ( valorX == valorY || valorY == valorZ || valorX == valorZ ) {
        printf("Esse triângulo é ISÓSCELE.\n");
    } else if ( valorX != valorY || valorY != valorZ || valorX != valorZ ) {
        printf("Esse triângulo é ESCALENO.\n");
    } else {
        printf("Infelizmente, não é possível formar um retângulo com esses valores :/");
    }

}