// SÍNTESE
//     ENTRADA: num (int)
//     PROCESSAMENTO: decide se vai imprimir "F1" (N<=10), "F2" (N>10 && N <= 100) ou "F3" (N>100)
//     SAÍDA: "F1" || "F2" || "F3"

#include <stdio.h>

int main() {

    int num;
    
    printf("Insira um número: \n");
    scanf("%d", &num);

    if (num <= 10) {
        printf("F1 \n");
    } else {
        if (num > 10 && num <= 100 )
        {
            printf("F3 \n");
        } else {
            printf("F3 \n");
        }
    }

    

    
    
}