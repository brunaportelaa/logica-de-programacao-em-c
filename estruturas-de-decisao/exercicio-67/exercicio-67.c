// SÍNTESE
//     ENTRADA: salário (int)
//     PROCESSAMENTO: verifica a faixa salarial e aplica o aumento de acordo com a faixa
//     SAÍDA: printf com o salário com aumento

#include <stdio.h>

#define FAIXA_1 1750
#define FAIXA_2 2000
#define FAIXA_3 3000
#define PERCENTUAL_1 0.12
#define PERCENTUAL_2 0.10
#define PERCENTUAL_3 0.07
#define PERCENTUAL_4 0.05

int main() {

    int salario;
    
    printf("Informe o salário: \n");
    scanf("%d", &salario);

    if( salario < FAIXA_1 ) {
        salario += salario * PERCENTUAL_1;
    } else {
        if( salario >= FAIXA_1 && salario < FAIXA_2 ) {
            salario += salario * PERCENTUAL_2;
        } else {
            if( salario >= FAIXA_2 && salario < FAIXA_3 ) {
                salario += salario * PERCENTUAL_3;
            } else {
                if( salario >= FAIXA_3 ) {
                    salario += salario * PERCENTUAL_4;
                }
            }
        }
    }

    printf("Salário com aumento: %d\n", salario);

}