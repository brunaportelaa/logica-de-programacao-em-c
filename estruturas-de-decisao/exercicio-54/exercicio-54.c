// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

int main() {

    int opcao;
    int num1;
    int num2;
    int num3;
    
    printf("Digite o primeiro número: \n");
    scanf("%d", &num1);

    printf("Digite o segundo número: \n");
    scanf("%d", &num2);

    printf("Digite o terceiro número: \n");
    scanf("%d", &num3);

    printf("Digite 2 para mostrar o primeiro número, 3 para mostrar o segundo número ou 4 para mostrar o terceiro númro: \n");
    scanf("%d", &opcao);

    if(opcao == 2) {
        printf("%d", num1);
    } else {
        if (opcao == 3) {
            printf("%d", num2);
        } else {
            if (opcao == 4)
            {
                printf("%d", num3);
            } else {
                printf("Opção inválida");
            }
            
        }
        
    }

}