// SÍNTESE
//     ENTRADA: vendas_corretor1, vendas_corretor2, vendas_corretor3 (float);
//     PROCESSAMENTO: calcula total_vendas e define porcentagem de comissão de cada corretor
//     SAÍDA: comissao_corretor1, comissão_corretor2, comissao_corretor3, total_vendas (float)

#include <stdio.h>

int main() {

    float vendas_corretor1;
    float vendas_corretor2;
    float vendas_corretor3;
    float total_vendas;
    float comissao_corretor1;
    float comissao_corretor2;
    float comissao_corretor3;
    
    printf("Informe o valor da venda do corretor 1: \n");
    scanf("%f", &vendas_corretor1);

    printf("Informe o valor da venda do corretor 2: \n");
    scanf("%f", &vendas_corretor2);

    printf("Informe o valor da venda do corretor 3: \n");
    scanf("%f", &vendas_corretor3);

    if (vendas_corretor1 > 50000){
        comissao_corretor1 = 12.0;
    } else {
        if (vendas_corretor1 <= 50000 && vendas_corretor1 >= 30000) {
            comissao_corretor1 = 9.5;
    }   else {
            comissao_corretor1 = 7.0;
    }
    }

    if (vendas_corretor2 > 50000){
        comissao_corretor2 = 12.0;
    } else {
        if (vendas_corretor2 <= 50000 && vendas_corretor2 >= 30000) {
            comissao_corretor2 = 9.5;
        } else {
            comissao_corretor2 = 7.0;
        }
    }

    if (vendas_corretor3 > 50000){
        comissao_corretor3 = 12.0;
    } else {
        if (vendas_corretor3 <= 50000 && vendas_corretor3 >= 30000) {
            comissao_corretor3 = 9.5;
        } else {
            comissao_corretor3 = 7.0;
    }
    }
    
    total_vendas = vendas_corretor1 + vendas_corretor2 + vendas_corretor3;

    printf("O corretor 1 vendeu %.2f e recebe uma comissão de %.2f%%\n", vendas_corretor1, comissao_corretor1);
    printf("O corretor 2 vendeu %.2f e recebe uma comissão de %.2f%%\n", vendas_corretor2, comissao_corretor2);
    printf("O corretor 3 vendeu %.2f e recebe uma comissão de %.2f%%\n", vendas_corretor3, comissao_corretor3);

    printf("O total de vendas da empresa foi de R$%.2f", total_vendas);


}