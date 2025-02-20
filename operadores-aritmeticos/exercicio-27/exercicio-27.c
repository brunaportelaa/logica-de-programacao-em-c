// SÍNTESE
//     ENTRADA: codigo (int)
//     PROCESSAMENTO: o digito verificador (DigitoV) módulo 7 
//     SAÍDA: digitoV (int)


#include <stdio.h>

int main() {

    int codigo;
    int algA;
    int algB;
    int algC;
    int algD;
    int algE;
    int varS;
    int digitoV;

    printf("-----CÓDIGO VERIFICADOR DÍGITO V------\n");

    printf("Forneça um código de 5 algarismos: \n");
    scanf("%d", &codigo);

    algE = codigo % 10;
    printf("Algarismo E: %d\n", algE);

    algD = (codigo / 10) % 10;
    printf("Algarismo D: %d\n", algD);

    algC = (codigo / 100) % 10;
    printf("Algarismo C: %d\n", algC);

    algB = (codigo / 1000) % 10;
    printf("Algarismo B: %d\n", algB);
    
    algA = (codigo / 10000) % 10;
    printf("Algarismo A: %d\n", algA);

    varS = (6 * algA) + (5 * algB) + (4 * algC) + (3 * algD) + (2 * algE);
    printf("Valor de S: %d\n", varS);

    digitoV = varS % 7;
    printf("Dígito V: %d\n", digitoV);

}