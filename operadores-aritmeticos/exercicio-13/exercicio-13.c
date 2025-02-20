// SÍNTESE
//     ENTRADA: temp_fahrenheit (float)
//     PROCESSAMENTO: conversão para celcius
//     SAÍDA: temp_celcius (float)

#include <stdio.h>

int main() {

    float temp_celsius;
    float temp_fahrenheit;

    printf("-----CONVERSÃO DE FAHRENHEIT PARA CELSIUS-------\n");

    printf("Forneça a temperatura em Fahrenheit:\n");
    scanf("%f", &temp_fahrenheit);

    temp_celsius = ((temp_fahrenheit - 32) * (5.0 / 9.0));

    printf("A temperatura em Celsius é: %f\n", temp_celsius);
}