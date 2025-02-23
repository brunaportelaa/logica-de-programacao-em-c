// SÍNTESE
//     ENTRADA: carros_vendidos (int), valor_vendas (float)
//     PROCESSAMENTO: calcula a comissão fixa sobre os carros vendidos e a comissao proporcional ao valor das vendas
//     SAÍDA: comissao_fixa (int) e comissao_variavel (float)

#include <stdio.h>
#define SALARIO_MINIMO 1500.0
#define TAXA_COMISSAO_FIXA 50.0
#define TAXA_COMISSAO_VARIAVEL 0.05

int main() {

    int carros_vendidos;
    float valor_vendas;
    float comissao_fixa;
    float comissao_variavel;
    float salario_total;
    
    printf("Insira a quantidade total de carros vendida: \n");
    scanf("%d", &carros_vendidos);

    printf("Insira o valor total de vendas: \n");
    scanf("%f", &valor_vendas);

    salario_total = (SALARIO_MINIMO * 2) + (carros_vendidos * TAXA_COMISSAO_FIXA) + (valor_vendas * TAXA_COMISSAO_VARIAVEL);

    printf("O salário total do vendedor é de: R$%.2f\n", salario_total);

}