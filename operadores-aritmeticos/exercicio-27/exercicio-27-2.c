// SÍNTESE
//     ENTRADA: codigo (int)
//     PROCESSAMENTO: o digito verificador (DigitoV) módulo 7 
//     SAÍDA: digitoV (int)


#include <stdio.h>

int main() {

    int codigo;
    printf("Forneça um código de 5 algarismos: \n");
    scanf("%d", &codigo);
    codigo = ((6 * ((codigo / 10000) % 10)) + (5 * ((codigo / 1000) % 10)) + (4 * ((codigo / 100) % 10)) + (3 * ((codigo / 10) % 10)) + (2 * (codigo % 10))) % 7;
    printf("Dígito V: %d\n", codigo);

}