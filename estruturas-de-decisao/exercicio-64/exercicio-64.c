// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

#define PRECO_ABCD 5.30
#define PRECO_XYPK 6.00
#define PRECO_KLMP 3.20
#define PRECO_QRST 2.50

int main() {

    char codigo[4];
    int quantidade;
    float preco_total;
    
    printf("Informe o código do produto: \n");
    scanf("%s", &codigo);

    printf("Informe a quantidade: \n");
    scanf("%d", &quantidade);

    if( codigo == "ABCD" ) {
        preco_total = PRECO_ABCD * quantidade;
        printf("Preço total: %.2f\n", preco_total);
    } else {
        if( codigo == "XYPK" ) {
            preco_total = PRECO_XYPK * quantidade;
            printf("Preço total: %.2f\n", preco_total);
        } else {
            if( codigo == "KLMP" ) {
                preco_total = PRECO_KLMP * quantidade;
                printf("Preço total: %.2f\n", preco_total);
            } else {
                if( codigo == "QRST" ) {
                    preco_total = PRECO_QRST * quantidade;
                    printf("Preço total: %.2f\n", preco_total);
                } else {
                    printf("Por favor, informe um código válido.\n");
                }
            }
        }
    }
}