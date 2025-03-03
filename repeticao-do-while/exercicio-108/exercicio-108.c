// SÍNTESE
//     ENTRADA: dois números inteiros
//     PROCESSAMENTO: calcular o quociente e o resto da divisão de dois números inteiros
//     SAÍDA: quociente e resto da divisão

#include <stdio.h>

int main() {

    int num1;
    int num2;
    int counter = 1;
    int resto;

    printf("Insira um número: \n");
    scanf("%d", &num1);

    printf("Insira um número: \n");
    scanf("%d", &num2);

    
    do {
        num1 -= num2;
        counter++;

        if (num1 - num2 < num2)
        {
            resto = num1 - num2;
        }
        
    } while (num1 - num2 >= num2);

    printf("Quociente = %d. Resto = %d.\n", counter, resto);
    


}