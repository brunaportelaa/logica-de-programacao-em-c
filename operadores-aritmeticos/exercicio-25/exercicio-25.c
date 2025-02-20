// SÍNTESE
//     ENTRADA: Int1 e Int2
//     PROCESSAMENTO: Efetua divisão e operação de módulo
//     SAÍDA: quociente (int) e resto (float)

#include <stdio.h>

int main() {

    int int1;
    int int2;
    int quociente;
    int resto;
    
    printf("-----QUOCIENTE E RESTO DA DIVISÃO------\n");

    printf("Forneça um valor inteiro: \n");
    scanf("%d", &int1);

    printf("Forneça outro valor inteiro: \n");
    scanf("%d", &int2);

    quociente = int1 / int2;
    resto = int1 % int2;

    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);

}