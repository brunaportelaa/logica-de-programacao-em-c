// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

int main() {

    int i;
    int salarioMaisBaixo = 999999;
    int salarioMaisAlto;
    int salario;
    int soma = 0;
    int qtdFuncionarios;

    printf("Informe quantos funcionários tem a empresa\n");
    scanf("%d", &qtdFuncionarios);

    for ( i = 1; i <= qtdFuncionarios; i++)
    {
        printf("Informe o salário do funcionário %d\n", i);
        scanf("%d", &salario);

        if( salario > salarioMaisAlto) {
            salarioMaisAlto = salario;
        }

        if ( salario < salarioMaisBaixo) {
            salarioMaisBaixo = salario;
        }

        soma += salario;
    }

    printf("A média dos salários é de: %d\n", soma / qtdFuncionarios);
    printf("O salário mais alto é: %d\n", salarioMaisAlto);
    printf("O salário mais baixo é: %d\n", salarioMaisBaixo);

}