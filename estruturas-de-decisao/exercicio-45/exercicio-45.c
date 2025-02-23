// SÍNTESE
//     ENTRADA: conta_bancaria (int), saldo (float), operacao (int), valor_operacao (float)
//     PROCESSAMENTO: realiza operações de depósito e retirada
//     SAÍDA: saldo (float)

#include <stdio.h>

int main() {

    int conta_bancaria;
    float saldo;
    int operacao;
    float valor_operacao;
    
    printf("Insira o número da sua conta bancária:\n");
    scanf("%d", &conta_bancaria);

    printf("Insira o seu saldo inicial:\n");
    scanf("%f", &saldo);

    printf("Digite 1 para operação de depósito ou 2 para operação de retirada:\n");
    scanf("%d", &operacao);

    if (operacao == 1) {
        printf("Informe o valor que gostaria de depositar:\n");
        scanf("%f", &valor_operacao);
        saldo += valor_operacao;
        printf("Seu novo saldo é de R$%.2f\n", saldo);
    } else {
        if ( operacao == 2 ) {
            printf("Informe o valor que gostaria de retirar:\n");
            scanf("%f", &valor_operacao);
            saldo -= valor_operacao;
            printf("Seu novo saldo é de R$%.2f\n", saldo);

            if (saldo < 0) {
                printf("Conta estourada: seu saldo ficou negativo");
            } 
        } else {
            printf("Valor inválido\n");
            printf("Digite 1 para operação de depósito ou 2 para operação de retirada:\n");
            scanf("%d", &operacao); 
        }
    }
}