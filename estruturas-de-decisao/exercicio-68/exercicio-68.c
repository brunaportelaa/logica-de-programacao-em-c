// SÍNTESE
//     ENTRADA: salário (int)
//     PROCESSAMENTO: verifica o desconto de acordo com o salário
//     SAÍDA: printf com o desconto

#include <stdio.h>
#define DESCONTO_PERCENTUAL 0.11
#define MAX_DESCONTO 318.20

int main() {

    int salario;
    float desconto;
    
    printf("Informe o salário: \n");
    scanf("%d", &salario);

    if( salario * DESCONTO_PERCENTUAL > MAX_DESCONTO ) {
        desconto = MAX_DESCONTO;
    } else {
        desconto = salario * DESCONTO_PERCENTUAL;

    }

    printf("Desconto: %.2f\n", desconto);
}