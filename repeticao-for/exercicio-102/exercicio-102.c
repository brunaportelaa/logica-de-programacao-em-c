// SÍNTESE
//     ENTRADA: diarias (int)
//     PROCESSAMENTO: calcula o total do cliente e o total do hotel
//     SAÍDA: total do cliente e total do hotel

#include <stdio.h>

int main() {
    
    int i;
    int diarias;
    float totalCliente;
    float total = 0;

    for ( i = 0; i < 30; i++ ) {
        printf("Quantas diárias você ficou no hotel? \n");
        scanf("%d", &diarias);

        if (diarias < 15)
        {
            totalCliente = (diarias + 4) * 50;
        } else {
            if (diarias == 15)
            {
                totalCliente = (diarias + 3.6) * 50;
            } else {
                totalCliente = (diarias + 3) * 50;
            }
        }

        total += totalCliente;
        
        printf("Total do cliente %d: R$ %.2f\n", i, totalCliente);
    }

    printf("Total do hotel: R$%.2f\n", total);
}