// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

int main() {

    int altura1;
    int peso1;
    int altura2;
    int peso2;

    printf("Informe a altura da primeira pessoa: \n");
    scanf("%d", &altura1);

    printf("Informe o peso da primeira pessoa: \n");
    scanf("%d", &peso1);

    printf("Informe a altura da segunda pessoa: \n");
    scanf("%d", &altura2);

    printf("Informe o peso da segunda pessoa: \n");
    scanf("%d", &peso2);

    if ( peso1 > peso2 ) {
        printf("A primeira pessoa tem o maior peso\n");
    } else {
        printf("A segunda pessoa tem o maior peso\n");
    }

    if ( altura1 > altura2 ) {
        printf("A pessoa primeira pessoa tem a maior altura\n");
    } else {
        printf("A segunda pessoa tem a maior altura\n");
    }


}