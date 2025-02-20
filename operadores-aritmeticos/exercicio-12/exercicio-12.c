// SÍNTESE
//     ENTRADA: temp_celsius (float)
//     PROCESSAMENTO: conversão para fahrenheint
//     SAÍDA: temp_fahrenheit (float)

#include <stdio.h>

int main() {

    float temp_celsius;
    float temp_fahrenheit;

    printf("-----CONVERSÃO DE CELSIUS PARA FAHRENHEIT-------\n");

    printf("Forneça a temperatura em Celsius:\n");
    scanf("%f", &temp_celsius);

    temp_fahrenheit = ((9 * temp_celsius) + 160) / 5;

    printf("A temperatura em Fahrenheit é: %f\n", temp_fahrenheit);
}