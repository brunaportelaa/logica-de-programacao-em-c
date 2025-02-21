// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

int main() {

    int data_hoje;
    int dia_hoje;
    int mes_hoje;
    int ano_hoje;

    int data_nasc;
    int dia_nasc;
    int mes_nasc;
    int ano_nasc;
    int dias_vividos;
    
    printf("Insira dia de hoje no formato DDMMAAAA: \n");
    scanf("%d", &data_hoje);

    printf("Insira sua data de nascimento no formato DDMMAAAA: \n");
    scanf("%d", &data_nasc);

    dia_hoje = data_hoje / 1000000;
    mes_hoje = (data_hoje / 10000) % 100;
    ano_hoje = data_hoje % 10000;

    dia_nasc = data_nasc / 1000000;
    mes_nasc = (data_nasc / 10000) % 100;
    ano_nasc = data_nasc % 10000;

    // Não finalizado!
}