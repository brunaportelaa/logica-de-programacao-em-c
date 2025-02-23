// SÍNTESE
//     ENTRADA: tipo_selecionado (int), quantidade (int)
//     PROCESSAMENTO: calcula o total arrecadado
//     SAÍDA: printa a quantidade vendida e o total arrecadado

#include <stdio.h>

int main() {

    int tipo_selecionado;
    float preco;
    int quantidade;
    float total_arrecadado;
    
    printf("Insira o tipo de picolé desejado: \n");
    scanf("%d", &tipo_selecionado);

    if(tipo_selecionado == 1) {
        printf("Insira a quantidade vendida de picolés tipo 1: \n");
        scanf("%d", &quantidade);
        preco = 0.5;
        total_arrecadado = preco * quantidade;
        printf("Foram vendidos %d picolés do tipo 1. O total arrecadado foi de R$%.2f", quantidade, total_arrecadado);
    } else {
        if (tipo_selecionado == 2) {
        printf("Insira a quantidade vendida de picolés tipo 2: \n");
        scanf("%d", &quantidade);
        preco = 0.6;
        total_arrecadado = preco * quantidade;
        printf("Foram vendidos %d picolés do tipo 2. O total arrecadado foi de R$%.2f", quantidade, total_arrecadado);
        } else {
            if (tipo_selecionado == 3) {
            printf("Insira a quantidade vendida de picolés tipo 3: \n");
            scanf("%d", &quantidade);
            preco = 0.75;
            total_arrecadado = preco * quantidade;
            printf("Foram vendidos %d picolés do tipo 3. O total arrecadado foi de R$%.2f", quantidade, total_arrecadado);
            } else {
                printf("Por favor, insira um tipo válido (1, 2 ou 3)");
            }
        }
    }
} 