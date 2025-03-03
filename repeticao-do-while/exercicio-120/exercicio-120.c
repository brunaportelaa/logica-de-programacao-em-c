// SÍNTESE
//     ENTRADA: idade, gênero e salário de habitantes
//     PROCESSAMENTO: calcular média salarial, menor e maior idade, quantidade de mulheres com salário até 1000
//     SAÍDA: média salarial, menor e maior idade, quantidade de mulheres com salário até 1000

#include <stdio.h>

int main() {

    int idade = 1;
    int genero;
    int salario;
    int soma = 0;
    int qtdHabitantes = 0;
    int media = 0;
    int mulheresSalarioAte1000 = 0;
    int menorIdade = 999;
    int maiorIdade;

    

    do {

        printf("Informe a idade do habitante (para encerrar o programa, informe uma idade negativa):\n");
        scanf("%d", &idade);

        if (idade > 0)
        {
            qtdHabitantes++;

            if (idade < menorIdade)
            {
            menorIdade = idade;
            }

            if (idade > maiorIdade)
            {
            maiorIdade = idade;
            }

            printf("Informe o gênero do habitante (0 - Masculino, 1 - Feminino, 2 - Outro):\n");
            scanf("%d", &genero);

            printf("Informe o salário do habitante:\n");
            scanf("%d", &salario);

            soma += salario;

            if (genero == 1 && salario < 1000)
            {
                mulheresSalarioAte1000 ++;
            }
        }
        

    } while ( idade > 0);

    media = soma/qtdHabitantes;

    printf("Média: %d\n", media);
    printf("Menor idade: %d\n", menorIdade);
    printf("Maior idade: %d\n", maiorIdade);
    printf("Mulheres com salário até 100: %d\n", mulheresSalarioAte1000);

}