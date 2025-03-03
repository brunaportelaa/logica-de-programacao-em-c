// SÍNTESE
//     ENTRADA: num_parafusos, num_porcas e num_arruelas (float);
//     PROCESSAMENTO: calcula o total da compra, o total de desconto e o total a pagar;
//     SAÍDA: total_desconto e total_a_pagar (float)

#include <stdio.h>
#define PRECO_PORCAS 5.0
#define PRECO_PARAFUSOS 2.0
#define PRECO_ARRUELAS 1.0


int main() {

    float percentual_desconto;
    float num_porcas;
    float num_parafusos;
    float num_arruelas;
    float total_desconto;
    float total_a_pagar;
    
    printf("Informe quantas porcas foram compradas: \n");
    scanf("%f", &num_porcas);

    printf("Informe quantos parafusos foram comprados: \n");
    scanf("%f", &num_parafusos);

    printf("Informe quantas arruelas foram compradas: \n");
    scanf("%f", &num_arruelas);

    total_a_pagar = (num_porcas * PRECO_PORCAS) + (num_parafusos * PRECO_PARAFUSOS) + (num_arruelas * PRECO_ARRUELAS);
    printf("O valor total da compra é de R$%.25f\n",total_a_pagar);
    
    if (num_porcas > 0) {
        percentual_desconto = 0.1;
        total_desconto += (num_porcas * PRECO_PORCAS) * percentual_desconto;
    } 

    if (num_parafusos > 0) {
        percentual_desconto = 0.2;
        total_desconto += (num_parafusos * PRECO_PARAFUSOS) * percentual_desconto;
    }

    if (num_arruelas > 0) {
        percentual_desconto = 0.3;
        total_desconto += (num_arruelas * PRECO_ARRUELAS) * percentual_desconto;
    }

    printf("Total de desconto: R$%.2f\n", total_desconto);

    total_a_pagar -= total_desconto;
    printf("Total a pagar pela compra: R$%.2f\n", total_a_pagar);


}