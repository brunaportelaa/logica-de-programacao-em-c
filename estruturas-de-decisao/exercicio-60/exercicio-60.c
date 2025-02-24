// SÍNTESE
//     ENTRADA: código (int), quantidade (int)
//     PROCESSAMENTO: calcular o valor total da compra para cada item
//     SAÍDA: 

#include <stdio.h>

#define CODIGO_CACHORRO_QUENTE 100
#define CODIGO_BAURU_SIMPLES 101
#define CODIGO_BAURU_COM_OVO 102
#define CODIGO_HAMBURGUER 103
#define CODIGO_CHEESEBURGUER 104
#define CODIGO_REFRIGERANTE 105

#define PRECO_CACHORRO_QUENTE 1.1
#define PRECO_BAURU_SIMPLES 1.3
#define PRECO_BAURU_COM_OVO 1.5
#define PRECO_HAMBURGUER 1.1
#define PRECO_CHEESEBURGUER 1.3
#define PRECO_REFRIGERANTE 1.0

int main() {

    int codigo;
    int quantidade;
    float valor_compra;
    
    printf("Informe o código do produto: \n");
    scanf("%d", &codigo);

    printf("Informe a quantidade: \n");
    scanf("%d", &quantidade);

    if( codigo == CODIGO_CACHORRO_QUENTE) {
        valor_compra = PRECO_CACHORRO_QUENTE * quantidade;
    } else {
        if (codigo == CODIGO_BAURU_SIMPLES){
            valor_compra = PRECO_BAURU_SIMPLES * quantidade;
        } else {
            if ( codigo == CODIGO_BAURU_COM_OVO ){
                valor_compra = PRECO_BAURU_COM_OVO  * quantidade;
            } else {
                if ( codigo == CODIGO_HAMBURGUER ) {
                    valor_compra = PRECO_HAMBURGUER * quantidade;
                } else {
                    if ( codigo == CODIGO_CHEESEBURGUER ) {
                        valor_compra = PRECO_CHEESEBURGUER * quantidade;
                    } else {
                        if ( codigo == CODIGO_REFRIGERANTE ){
                            valor_compra = PRECO_REFRIGERANTE * quantidade;
                        } else {
                            printf("Por favor, insira um código válido.");
                        }
                    }
                }
            }  
        }
    }

    printf("O valor total da compra é de: R$%.2f\n", valor_compra);

}