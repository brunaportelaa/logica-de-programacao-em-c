// SÍNTESE
//     ENTRADA: var_a (int) e var_b (int)
//     PROCESSAMENTO: var_a passa a ter o valor de var_b, e vice-versa.
//     SAÍDA: var_a (int) e var_b (int)

#include <stdio.h>

int main() {

    int var_a;
    int var_b;
    int temp;

    printf("-----INVERTENDO VARIÁVEIS-------\n");

    printf("Dê um valor, em números inteiros, para a primeira variável: \n");
    scanf("%d", &var_a);

    printf("Dê um valor, em números inteiros, para a segunda variável: \n");
    scanf("%d", &var_b);

    temp = var_b;
    var_b = var_a;
    var_a = temp;

    printf("O valor da primeira variável agora é: %d\n", var_a);
    printf("O valor da segunda variável agora é: %d\n", var_b);


}