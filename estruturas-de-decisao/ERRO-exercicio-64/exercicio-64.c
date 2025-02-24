// SÍNTESE
//     ENTRADA: código (string), quantidade (int)
//     PROCESSAMENTO: verifica o código do produto e calcula o preço total
//     SAÍDA: printf com o preço total

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
        preco_total = quantidade * PRECO_ABCD;
    } else {
        if( codigo == "XYPK" ) {
            preco_total = quantidade * PRECO_XYPK;
        } else {
            if( codigo == "KLMP" ) {
                preco_total = quantidade * PRECO_KLMP;
            } else {
                if( codigo == "QRST" ) {
                    preco_total = quantidade * PRECO_QRST;
                } else {
                    printf("Por favor, informe um código válido. \n");
                }
            }
        }
    }
}