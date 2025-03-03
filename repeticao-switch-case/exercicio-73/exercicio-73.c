// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>
#include <math.h>

int main() {

    float num;
    int opcao;
    float resultado;
  
    printf ("Insira um número:\n");
    scanf("%f", &num);

    printf ("101-Raiz quadrada\n");
    printf ("102-A metade \n");
    printf ("103-10%% do número \n");
    printf ("104-O dobro \n");

    printf ("Escolha a opção: \n");
    scanf("%d", &opcao);

  
    switch ( opcao )
    {
        case 101:
            // resultado = sqrt(num);
            printf("%.2f\n", resultado);
            break;

        case 102:
            resultado = num/2;
            printf("%.2f\n", resultado);
            break;

        case 103:
            resultado = num * 0.1;
            printf("%.2f\n", resultado);
            break;

        case 104:
            resultado = num * 2;
            printf("%.2f\n", resultado);
            break;

        default:
            printf("Operação inválida. \n");
            break;
    }

}