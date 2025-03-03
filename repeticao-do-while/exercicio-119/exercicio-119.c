// SÍNTESE
//     ENTRADA: número de termos, primeiro termo e razão de uma progressão aritmética
//     PROCESSAMENTO: calcular a soma dos termos de uma progressão aritmética
//     SAÍDA: soma dos termos de uma progressão aritmética

#include <stdio.h>

int main() {

    int n;
    int a1;
    int r;
    int termo = 0;
    int i;
    int soma = 0;
    
    printf("Quantos termos deve ter a progressão aritmética?\n");
    scanf("%d", &n);

    printf("Qual deve ser o primeiro termo da progressão aritmética?\n");
    scanf("%d", &a1);

    printf("Qual deve ser a razão da progressão aritmética?\n");
    scanf("%d", &r);

    termo = a1;
    soma = a1;
    printf("%d - primeiro termo\n", a1); //5

    for ( i = 1; i < n; i++)
    {
        termo += r;
        soma += termo;
        printf("Termo: %d, Soma: %d\n", termo, soma);
    }



    
    
    


}