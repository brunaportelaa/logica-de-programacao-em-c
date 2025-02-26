// SÍNTESE
//     ENTRADA: dois valores inteiros e uma operação
//     PROCESSAMENTO: realiza a operação escolhida pelo usuário
//     SAÍDA: resultado da operação escolhida pelo usuário

#include <stdio.h>

int main() {

    int operacao;
    int a;
    int b;
    int i;
    int resultado;

    printf("Insira o valor A: \n");
    scanf("%d", &a);

    printf("Insira o valor B: \n");
    scanf("%d", &b);

    printf("Insira a operação que deseja realizar: \n");
    scanf("%d", &operacao);

    if (operacao == 1)
    {
        for(i=1; i<=10; i++){
            printf("%d, %d\n", a, b);
            resultado = a % b;
            printf("%d\n", resultado);
        }

    } else {
        if (operacao == 2)
        {
            printf("ok, tchau.");
        } else {
            if (operacao == 3)
            {
                for(i=1; i<=2; i++){
                    for( i=1; i<=50; i++ ){
                    printf("%d, %d\n", a, b);
                    resultado = a % b;
                    printf("%d\n", resultado);
                    }
                }
            } else {
                if (operacao == 4)
                {
                    printf("Informe quantas vezes você quer que a operação seja executada: \n");
                    scanf("%d", &i);
                    for(i=i; i>0; i--){
                        printf("%d, %d\n", a, b);
                        resultado = a % b;
                        printf("%d\n", resultado);
                    }
                } else {
                    printf("Por favor, insira um valor válido para a operacão. \n");
                }
                
            }
            
        } 
    }
    
}