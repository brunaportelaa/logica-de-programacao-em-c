// SÍNTESE
//     ENTRADA: carros_vendidos (int), valor_vendas (float)
//     PROCESSAMENTO: calcula a comissão fixa sobre os carros vendidos e a comissao proporcional ao valor das vendas
//     SAÍDA: comissao_fixa (int) e comissao_variavel (float)

#include <stdio.h>

int main() {

    int carros_vendidos;
    float valor_vendas;
    float salario_minimo = 1500;
    float taxa_comissao_fixa = 50;
    float taxa_comissao_variavel = 0.05;
    float comissao_fixa;
    float comissao_variavel;
    float salario_total;
    
    printf("Insira a quantidade total de carros vendida: \n");
    scanf("%d", &carros_vendidos);

    printf("Insira o valor total de vendas: \n");
    scanf("%f", &valor_vendas);

    salario_total = (salario_minimo * 2) + (carros_vendidos * taxa_comissao_fixa) + (valor_vendas * taxa_comissao_variavel);

    printf("O salário total do vendedor é de: R$%.2f\n", salario_total);

}