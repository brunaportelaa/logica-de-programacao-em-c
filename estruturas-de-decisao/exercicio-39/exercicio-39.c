// SÍNTESE
//     ENTRADA: valor_compra e valor_pago (int)
//     PROCESSAMENTO:  calcula o troco em notas de 1, 10 e 100
//     SAÍDA: nota_1, notas_10, notas_100 (int)

#include <stdio.h>

int main() {

    int valor_compra;
    int valor_pago;
    int valor_troco;
    int notas_100;
    int notas_10;
    int notas_1;
    
    printf("Informe o valor total da compra: \n");
    scanf("%d", &valor_compra);

    printf("Informe o valor pago pelo cliente: \n");
    scanf("%d", &valor_pago);

    printf("O valor total da compra é de %d\n", valor_compra);

    valor_troco = valor_pago - valor_compra;
    printf("O valor total do troco é de %d\n", valor_troco);

    if (valor_troco >=  100) {
        notas_100 = valor_troco / 100;
        printf("O caixa deve como troco %d notas de 100\n", notas_100);
        valor_troco = valor_troco % 100;
    }

    if (valor_troco >= 10)
    {
        notas_10 = valor_troco / 10;
        printf("O caixa deve como troco %d notas de 10\n", notas_10);
        valor_troco = valor_troco % 10;
    }

    if (valor_troco >= 1)
    {
        notas_10 = valor_troco;
        printf("O caixa deve como troco %d notas de 1\n", notas_10);
    }
    

}