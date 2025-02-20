// SÍNTESE
//     ENTRADA: numA, numB, numC, numD e numE
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
    int temp;
    int varS;
    int digitoV;

    printf("-----CÓDIGO VERIFICADOR DÍGITO V------\n");

    printf("Forneça um código de 5 algarismos: \n");
    scanf("%d", &codigo);

    algE = codigo % 10;
    // printf("Algarismo E: %d\n", algE);
    temp = codigo / 10;
    // printf("Variável temporária: %d\n", temp);

    algD = temp % 10;
    // printf("Algarismo D: %d\n", algD);
    temp = temp / 10;
    // printf("Variável temporária: %d\n", temp);

    algC = temp % 10;
    // printf("Algarismo C: %d\n", algC);
    temp = temp / 10;
    // printf("Variável temporária: %d\n", temp);

    algB = temp % 10;
    // printf("Algarismo B: %d\n", algB);
    
    algA = temp / 10;
    // printf("Algarismo A: %d\n", algA);

    varS = (6 * algA) + (5 * algB) + (4 * algC) + (3 * algD) + (2 * algE);
    printf("Valor de S: %d\n", varS);

    digitoV = varS % 7;
    printf("Dígito V: %d\n", digitoV);

}