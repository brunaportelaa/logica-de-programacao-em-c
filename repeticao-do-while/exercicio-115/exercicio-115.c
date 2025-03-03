// SÍNTESE
//     ENTRADA: salário de funcionários
//     PROCESSAMENTO: calcular a média salarial, o salário mais alto e o salário mais baixo
//     SAÍDA: média salarial, salário mais alto e salário mais baixo

#include <stdio.h>

int main() {

    int desejaContinuar = 1;
    float salario;
    float soma = 0.0;
    float media = 0.0;
    int qtdFuncionarios = 0;
    float salarioMaisAlto = 0;
    float salarioMaisBaixo = 9999999;

    while ( desejaContinuar == 1){
        printf("Informe o salário do funcionário \n");
        scanf("%f", &salario);

        qtdFuncionarios++;
        soma += salario;

        if (salario > salarioMaisAlto)
        {
            salarioMaisAlto = salario;
        }

        if (salario < salarioMaisBaixo)
            {
                salarioMaisBaixo = salario;
            }

        printf("Deseja informar mais algum funcionário? (1 - sim, 0 - não)\n");
        scanf("%d", &desejaContinuar);
    }

    media = soma / qtdFuncionarios;

    printf("Média %.2f\n", media);
    printf("Salário mais baixo: %.2f\n", salarioMaisBaixo);
    printf("Salário mais alto: %.2f\n", salarioMaisAlto);



}