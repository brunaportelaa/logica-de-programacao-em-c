// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

#define PRECO_1001 5.32
#define PRECO_1324 6.45
#define PRECO_6548 2.37
#define PRECO_0987 5.32
#define PRECO_7623 6.45


int main() {

    int codigo;
    int quantidade;
    float preco;
    
    printf("Informe o código do produto: \n");
    scanf("%d", &codigo);

    printf("Informe a quantidade: \n");
    scanf("%d", &quantidade);


    if( codigo == 1001 ) {
        preco = quantidade * PRECO_1001;
    } else {
        if( codigo == 1324 ) {
            preco = quantidade * PRECO_1324;
        } else {
            if( codigo == 6548 ) {
                preco = quantidade * PRECO_6548;
            } else {
                if( codigo == 987 ) {
                    preco = quantidade * PRECO_0987;
                } else {
                    if( codigo == 7623 ) {
                        preco = quantidade * PRECO_1001;
                    } else {
                        printf("Por favor, informe um código válido. \n");
                    }
                }
            }
        }
    }

    printf("Preço total: R$%.2f\n", preco);

}