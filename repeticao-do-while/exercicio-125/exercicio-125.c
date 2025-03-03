// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

int main() {

    int i;
    int elevador;
    int andares;
    int variacao;

    printf("Informe quantos andares tem o prédio: \n");
    scanf("%d", &andares);

    for ( i = 1; i <= andares; i++)
    {
        printf("Estamos no %do andar\n");
        printf("Informe quantas pessoas entraram (número positivo) ou saíram (número negativo) do elevador: \n");
        scanf("%d", &variacao);
    }
    

}