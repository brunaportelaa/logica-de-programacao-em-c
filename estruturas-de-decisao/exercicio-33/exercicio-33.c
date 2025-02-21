// SÍNTESE
//     ENTRADA: nota_prova1, nota_prova2, nota_prova3 (float)
//     PROCESSAMENTO: calcula a média final considerando peso 2, peso 3 e peso 5 para cada uma das provas, respectivamente
//     SAÍDA: media_final (float)

#include <stdio.h>

int main() {

    float nota_prova1;
    float nota_prova2;
    float nota_prova3;
    float media_final;
    
    printf("Insira a nota da primeira prova: \n");
    scanf("%f", &nota_prova1);

    printf("Insira a nota da segunda prova: \n");
    scanf("%f", &nota_prova2);

    printf("Insira a nota da terceira prova: \n");
    scanf("%f", &nota_prova3);

    media_final = (((nota_prova1) * 2) + ((nota_prova2) * 3) + ((nota_prova3) * 5)) / 10 ;

    printf("Média final: %.2f\n", media_final);

}