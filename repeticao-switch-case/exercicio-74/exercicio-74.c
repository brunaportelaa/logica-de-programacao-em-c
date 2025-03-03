// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

int main() {

    int opcao;
  
    printf ("Selecione a forma de pagamento\n");
    scanf("%d", &opcao);
  
    switch ( opcao )
    {
        case 1:
            printf("Venda a Vista\n");
            break;

        case 2:
            printf("Venda a Prazo 30 dias \n");
            break;

        case 3:
            printf("Venda a Prazo 60 dias \n");
            break;

        case 4:
            printf("Venda a Prazo 90 dias \n");
            break;

        case 5:
            printf("Venda no cartão de débito\n");
            break;

        case 6:
            printf("Venda no cartão de crédito\n");
            break;
    }

}
