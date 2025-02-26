// SÍNTESE
//     ENTRADA: um número inteiro
//     PROCESSAMENTO: imprime a tabuada do número inserido
//     SAÍDA: tabuada do número inserido

#include <stdio.h>

int main() {

    int num;
    int i;

    printf("Insira um número: \n");
    scanf("%d", &num);

    for ( i = 1; i <= 13; i++)
    {
        printf("%d x %d = %d\n", num, i, (num * i));
    }
    
}