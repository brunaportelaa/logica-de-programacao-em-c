// SÍNTESE
//     ENTRADA: sal_bruto (float)
//     PROCESSAMENTO: desconto de 10%, seguido de um desconto de 5%
//     SAÍDA: sal_liquido (float)

#include <stdio.h>

int main() {

    float sal_bruto;
    float sal_liquido;
    
    printf("-----CALCULADORA DE SALARIO LIQUIDO-------\n");

    printf("Informe o salário bruto: \n");
    scanf("%f", &sal_bruto);

    sal_liquido = sal_bruto * 0.9;
    sal_liquido = sal_liquido * 0.95;

    printf("Salário líquido: %.2f\n", sal_liquido);

}