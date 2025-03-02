// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

int main() {

    int n;
    int i;
    int f1 = 0;
    int f2 = 1;
    int f;

    printf("Informe um número n (maior que 2):\n");
    scanf("%d", &n);

    printf("%d\n", f1);
    printf("%d\n", f2);
 

    for ( i = 1; i < n; i++)
    {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
        printf("%d\n", f);

    }
}

