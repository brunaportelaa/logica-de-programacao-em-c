// SÍNTESE
//     ENTRADA: codigo (int)
//     PROCESSAMENTO: o digito verificador (DigitoV) módulo 7 
//     SAÍDA: digitoV (int)


#include <stdio.h>

int main() {

    int codigo;
    int varS;
    int digitoV;

    printf("-----CÓDIGO VERIFICADOR DÍGITO V------\n");

    printf("Forneça um código de 5 algarismos: \n");
    scanf("%d", &codigo);

    varS = (6 * ((codigo / 10000) % 10)) + (5 * ((codigo / 1000) % 10)) + (4 * ((codigo / 100) % 10)) + (3 * ((codigo / 10) % 10)) + (2 * (codigo % 10));
    printf("Valor de S: %d\n", varS);

    digitoV = varS % 7;
    printf("Dígito V: %d\n", digitoV);

}