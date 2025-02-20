// SÍNTESE
//     ENTRADA: num_a, num_b, num_c e num_d (int)
//     PROCESSAMENTO: Adição de cada par de valores distintos; multiplicação de cada par de valores distintos.
//     SAÍDA: soma_ab, soma_ac, soma_ad, soma_bc, soma_bd, soma_cd, multiplicacao_ab, multiplicacao_ac, multiplicacao_ad, multiplicacao_bc, multiplicacao_bd, multiplicacao_cd.

#include <stdio.h>

int main() {

    int num_a;
    int num_b;
    int num_c;
    int num_d;
    int soma_ab;
    int soma_ac;
    int soma_ad;
    int soma_bc;
    int soma_bd;
    int soma_cd;
    int multiplicacao_ab;
    int multiplicacao_ac;
    int multiplicacao_ad;
    int multiplicacao_bc;
    int multiplicacao_bd;
    int multiplicacao_cd;

    printf("------SOMANDO E MULTIPLICANDO VALORES------\n");

    printf("Dê um valor, em números inteiros, para a primeira variável: \n");
    scanf("%d", &num_a);

    printf("Dê um valor, em números inteiros, para a segunda variável: \n");
    scanf("%d", &num_b);

    printf("Dê um valor, em números inteiros, para a terceira variável: \n");
    scanf("%d", &num_c);

    printf("Dê um valor, em números inteiros, para a quarta variável: \n");
    scanf("%d", &num_d);

    soma_ab = num_a + num_b;
    soma_ac = num_b + num_c;
    soma_ad = num_a + num_d;
    soma_bc = num_b + num_c;
    soma_bd = num_b + num_d;
    soma_cd = num_c + num_d;
    multiplicacao_ab = num_a * num_b;
    multiplicacao_ac = num_a * num_c;
    multiplicacao_ad = num_a * num_d;
    multiplicacao_bc = num_b * num_c;
    multiplicacao_bd = num_b * num_d;
    multiplicacao_cd = num_c * num_d;

    printf("A soma de %d e %d é: %d\n", num_a, num_b, soma_ab);
    printf("A soma de %d e %d é: %d\n", num_b, num_c, soma_ac);
    printf("A soma de %d e %d é: %d\n", num_a, num_d, soma_ad);
    printf("A soma de %d e %d é: %d\n", num_b, num_c, soma_bc);
    printf("A soma de %d e %d é: %d\n", num_b, num_d, soma_bd);
    printf("A soma de %d e %d é: %d\n", num_c, num_d, soma_cd);
    printf("A multiplicação de %d e %d é: %d\n", num_a, num_b, multiplicacao_ab);
    printf("A multiplicação de %d e %d é: %d\n", num_a, num_c, multiplicacao_ac);
    printf("A multiplicação de %d e %d é: %d\n", num_a, num_d, multiplicacao_ad);
    printf("A multiplicação de %d e %d é: %d\n", num_b, num_c, multiplicacao_bc);
    printf("A multiplicação de %d e %d é: %d\n", num_b, num_d, multiplicacao_bd);
    printf("A multiplicação de %d e %d é: %d\n", num_c, num_d, multiplicacao_cd);
}