// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

int main() {

    int opcao;
    float valor;
    float variacao;
    float valorFinal;
  
    printf ("Selecione a forma de pagamento\n");
    scanf("%d", &opcao);

    printf ("Informe o valor da venda\n");
    scanf("%f", &valor);
  
    switch ( opcao )
    {
        case 1:
            valorFinal = valor - (valor * 0.1);  
            printf("Venda a Vista\n");
            printf("Desconto de 10%% aplicado: R$%.2f\n", valorFinal);
            break;

        case 2:
            valorFinal = valor - (valor * 0.05);  
            printf("Venda a Prazo 30 dias \n");
            printf("Desconto de 5%% aplicado: R$%.2f\n", valorFinal);
            break;

        case 3:
            printf("Venda a Prazo 60 dias \n");
            printf("Nenhum desconto aplicado\n");
            break;

        case 4:
            valorFinal = valor + (valor * 0.05);
            printf("Venda a Prazo 90 dias \n");
            printf("Acréscimo de 5%% aplicado: R$%.2f\n", valorFinal);
            break;

        case 5:
            valorFinal = valor - (valor * 0.08);
            printf("Venda no cartão de débito\n");
            printf("Desconto de 10%% aplicado: R$%.2f\n", valorFinal);
            break;

        case 6:
            valorFinal = valor - (valor * 0.07);
            printf("Venda no cartão de crédito\n");
            printf("Desconto de 10%% aplicado: R$%.2f\n", valorFinal);
            break;
    }

}
