// SÍNTESE
//     ENTRADA: saldo (float)
//     PROCESSAMENTO: verificar o saldo médio e calcular o crédito disponível
//     SAÍDA: printf com o saldo e o crédito disponível

#include <stdio.h>

#define PERCENTUAL_0_200 0
#define PERCENTUAL_201_400 0.2
#define PERCENTUAL_401_600 0.3
#define PERCENTUAL_601 0.4

int main() {

    float saldo;
    float credito;
    
    printf("Informe o saldo médio: \n");
    scanf("%f", &saldo);

    if( saldo <= 200 ) {
        printf("Seu saldo é de: R$%.2f", saldo);
        credito = saldo * PERCENTUAL_0_200;
        printf("Seu valor disponível para crédito é de: %.2f", credito);
    } else {
        if( saldo > 200 && saldo < 401 ) {
            printf("Seu saldo é de: R$%.2f", saldo);
            credito = saldo * PERCENTUAL_201_400;
            printf("Seu valor disponível para crédito é de: %.2f", credito);
        } else {
            if( saldo > 400 && saldo < 601 ) {
                printf("Seu saldo é de: R$%.2f", saldo);
                credito = saldo * PERCENTUAL_401_600;
                printf("Seu valor disponível para crédito é de: %.2f", credito);
            } else {
                printf("Seu saldo é de: R$%.2f", saldo);
                credito = saldo * PERCENTUAL_201_400;
                printf("Seu valor disponível para crédito é de: %.2f", credito);
                }
            }
        }

}