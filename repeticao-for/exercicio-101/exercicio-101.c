// SÍNTESE
//     ENTRADA: num (int)
//     PROCESSAMENTO: calcula o fatorial do número inserido
//     SAÍDA: fatorial (long int)

#include <stdio.h>

int main() {

    int num;
    int i;
    long int fatorial = 1;

    printf("Insira o número para o qual você gostaria de saber o fatorial:\n");
    scanf("%d", &num);

    for ( i = 1; i <= num; i++ ){
        fatorial *= i;
    }

    printf("Fatorial: %d\n", fatorial);

}