// SÍNTESE
//     ENTRADA: data_hoje e data_nasc (int)
//     PROCESSAMENTO: divide a data de hoje e a data de nascimento e calcula quantos dias foram vividos
//     SAÍDA: dias_vividos (int)

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

    dias_vividos = ((ano_hoje - (ano_nasc + 1)) * 360) + (((12 - mes_nasc) + (mes_hoje - 1)) * 30) + dia_hoje + (30 - dia_nasc);

    printf("Uma pessoa nascida no dia %d/%d/%d, considerando-se um mês de 30 dias, viveu por %d dias\n", dia_nasc, mes_nasc, ano_nasc, dias_vividos);
}