// SÍNTESE
//     ENTRADA: horas_trabalhadas (float), valor_hora (float), percentual_desconto (float)
//     PROCESSAMENTO: obter salário bruto; obter o desconto total; subtrair o desconto total do salário bruto
//     SAÍDA: salario_bruto (float), total_desconto (float), salario_liquido (float)

#include <stdio.h>

int main() {
    float horas_trabalhadas;
    float valor_hora;
    float percentual_desconto;
    float salario_bruto;
    float total_desconto;
    float salario_liquido; 

    printf("-----CALCULADORA DE SALÁRIO LÍQUIDO-------\n");

    printf("Forneça o total de horas trabalhadas:\n");
    scanf("%f", &horas_trabalhadas);

    printf("Forneça o valor da hora trabalhada:\n");
    scanf("%f", &valor_hora);

    printf("Forneça o percentual de desconto, em porcentagem\n");
    scanf("%f", &percentual_desconto);

    salario_bruto = valor_hora * horas_trabalhadas;
    total_desconto = salario_bruto * (percentual_desconto/100);

    salario_liquido = salario_bruto - total_desconto;
    
    printf("O colaborador trabalhou por %.2f horas, cobrando o valor de %.2f reais a cada hora trabalhada.\n Seu salário bruto é de %.2f ao mês.\n O total de desconto sobre o salário é de %.2f.\n Seu salário líquido é de %.2f reais", horas_trabalhadas, valor_hora, salario_bruto, total_desconto, salario_liquido);

}