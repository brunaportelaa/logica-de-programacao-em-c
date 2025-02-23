// SÍNTESE
//     ENTRADA: numA e numB (int)
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

int main() {

    int numA;
    int numB;
    
    printf("Insira um número: \n");
    scanf("%d", &numA);

    printf("Insira outro número: \n");
    scanf("%d", &numB);

    if(numB % numA == 0) {
        printf("São múltiplos\n");
    } else {
        printf("Não são múltiplos\n");
    }

}