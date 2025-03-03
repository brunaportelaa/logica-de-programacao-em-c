// SÍNTESE
//     ENTRADA: idade, sexo, cor dos olhos e cor dos cabelos de habitantes
//     PROCESSAMENTO: calcular a maior idade, quantidade de mulheres entre 18 e 35 anos, quantidade de loiros com olhos verdes
//     SAÍDA: maior idade, quantidade de mulheres entre 18 e 35 anos, quantidade de loiros com olhos verdes

#include <stdio.h>

int main() {

    int sexo;
    int idade = 1;
    int olhos;
    int cabelos;
    int maiorIdade = 0;
    int mulheres18a35 = 0;
    int loirosOlhosVerdes = 0;

    while (idade > 0)
    {
        printf("Informe a idade do habitante (para encerrar o programa, informe uma idade negativa):\n");
        scanf("%d", &idade);

        if (idade > 0)
        {
            // Definindo a maior idade
            if (idade > maiorIdade)
            {
                maiorIdade = idade;
            }


            printf("Informe o sexo do habitante (0 - Masculino, 1 - Feminino, 2 - Outro):\n");
            scanf("%d", &sexo);

            // Quantidade de mulheres entre 18 e 35
            if ( sexo == 1 && idade > 17 && idade < 36)
            {
                mulheres18a35++;
            }
            
            printf("Informe a cor dos olhos (0 - azul, 1 - verde, 2 - castanho):\n");
            scanf("%d", &olhos);

            printf("Informe a cor dos cabelos (0 - loiros, 1 - castanhos, 2 - ruivos):\n");
            scanf("%d", &cabelos);

            if (olhos == 1 && cabelos == 0)
            {
                loirosOlhosVerdes++;
            }
            
            
        }
    }
    
       

    printf("A maior idade é %d\n", maiorIdade);
    printf("Mulheres entre 18 e 35: %d\n", mulheres18a35);
    printf("Loiros com olhos verdes %d\n", loirosOlhosVerdes);

}