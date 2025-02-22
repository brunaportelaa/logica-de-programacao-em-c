// SÍNTESE
//     ENTRADA: num_parafusos, num_porcas e num_arruelas (float);
//     PROCESSAMENTO: calcula o total da compra, o total de desconto e o total a pagar;
//     SAÍDA: total_desconto e total_a_pagar (float)

#include <stdio.h>

int main() {

    float preco_porcas = 5;
    float preco_parafusos = 2;
    float preco_arruelas = 1;
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

    total_a_pagar = (num_porcas * preco_porcas) + (num_parafusos * preco_parafusos) + (num_arruelas * preco_arruelas);
    printf("O valor total da compra é de R$%.25f\n",total_a_pagar);
    

    total_desconto += (num_porcas * preco_porcas) * 0.1;
    printf("Total de desconto em porcas: R$%.2f\n",(num_porcas * preco_porcas) * 0.1);

    total_desconto += (num_parafusos * preco_parafusos) * 0.2;
    printf("Total de desconto em porcas: R$%.2f\n",(num_parafusos * preco_parafusos) * 0.2);

    total_desconto += (num_arruelas * preco_arruelas) * 0.3;
    printf("Total de desconto em porcas: R$%.2f\n",(num_arruelas * preco_arruelas) * 0.3);

    printf("Total de desconto: R$%.2f\n", total_desconto);

    total_a_pagar -= total_desconto;
    printf("Total a pagar pela compra: R$%.2f\n", total_a_pagar);


}