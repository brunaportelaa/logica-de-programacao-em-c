// SÍNTESE
//     ENTRADA: -
//     PROCESSAMENTO: imprime os 20 primeiros números da sequência de Fibonacci
//     SAÍDA: sequência de Fibonacci

#include <stdio.h>

int main() {

    int i;
    int f1 = 0;
    int f2 = 1;
    int f;

    printf("%d\n", f1);
    printf("%d\n", f2);
 

    for ( i = 1; i < 21; i++)
    {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
        printf("%d\n", f);

    }
    

}