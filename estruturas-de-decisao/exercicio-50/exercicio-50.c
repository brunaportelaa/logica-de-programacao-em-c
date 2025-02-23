// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

int main() {

    int nota;
    
    printf("Aluno, apresente sua nota: \n");
    scanf("%d", &nota);

    if(nota < 50) {
        printf("Conceito: INSUFICIENTE. \n");
    } else if (nota >= 50 && nota < 65){
        printf("Conceito: REGULAR. \n");
    } else if (nota >= 65 && nota < 85){
        printf("Conceito: BOM. \n");
    } else if (nota >= 85 && nota <= 100){
        printf("Conceito: ÓTIMO. \n");
    } else {
        printf("Por favor, insira uma nota válida de 1 a 100. \n");
    }
}