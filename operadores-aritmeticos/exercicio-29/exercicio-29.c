// SÍNTESE
//     ENTRADA: data1 (int)
//     PROCESSAMENTO: Inversão da data no formato DDMMAA para AAMMDD
//     SAÍDA: data2 (int)

#include <stdio.h>

int main() {

    int data1;
    int data2;
    
    printf("-----INVERTENDO A DATA------\n");

    printf("Forneça uma data no formato DDMMAA: \n");
    scanf("%d", &data1);

    data2 = ((data1 % 100) * 10000) + (((data1 % 10000) / 100) * 100)  + (data1 / 10000);

    printf("Data no formato AAMMDD: %d\n", data2);

}