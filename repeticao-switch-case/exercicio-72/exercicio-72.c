// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

int main() {

    int idade;
  
    printf ("Qual é a idade do atleta?\n");
    scanf("%d", &idade);
  
    switch ( idade )
    {
        case 5 ... 10:
            printf("Categoria: INFANTIL\n");
            break;

        case 11 ... 15:
            printf("Categoria: JUVENIL\n");
            break;

        case 16 ... 20:
            printf("Categoria: JUNIOR\n");
            break;

        case 21 ... 25:
            printf("Categoria: PROFISSIONAL\n");
            break;

        default:
            printf("Idade fora da faixa etária definida para categorias.\n");
            break;
    }

}