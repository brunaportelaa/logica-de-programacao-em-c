// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

int main() {

    int i;
    int n;
    int quadrado;

    printf("Informe o número n:\n");
    scanf("%d", &n);

    for ( i = 1; i < 999; i++)
    {
        quadrado = i * i;
        if ( quadrado > n ){
            break;
        }
    }

    quadrado = (i - 1) * (i - 1);
    printf("O maior quadrado menor que %d é: %d (quadrado de %d)", n, quadrado, i-1);
    
}