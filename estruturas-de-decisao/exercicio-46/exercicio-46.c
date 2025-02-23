// SÍNTESE
//     ENTRADA: qtd_diarias (int)
//     PROCESSAMENTO: calcula o valor total da estadia
//     SAÍDA: valor_total (float)

#include <stdio.h>
#define VALOR_DIARIA 60.0

int main() {

    int qtd_diarias;
    float taxa_servicos;
    float valor_total;

    printf("Informe o número de diárias da sua estadia\n");
    scanf("%d", &qtd_diarias);

    if ( qtd_diarias < 15) {
        taxa_servicos = 8;
    } else {
        if ( qtd_diarias == 15 ) {
            taxa_servicos = 6;
        } else {
            taxa_servicos = 5.5;
        }
    }

    valor_total = (VALOR_DIARIA * qtd_diarias) + (taxa_servicos * qtd_diarias);

    printf("A sua estadia teve um total de %d diárias e o total da sua conta foi de R$%.2f", qtd_diarias, valor_total);
}