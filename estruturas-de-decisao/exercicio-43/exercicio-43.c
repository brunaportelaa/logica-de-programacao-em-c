// SÍNTESE
//     ENTRADA: categoria (char), salario (float)
//     PROCESSAMENTO: aumenta o salario de acordo com a categoria
//     SAÍDA: printa a categoria e o novo salário

#include <stdio.h>

int main() {

    char categoria;
    float salario;
    
    printf("Insira sua categoria: \n");
    scanf("%c", &categoria);

    printf("Insira seu salário: \n");
    scanf("%f", &salario);

    if(categoria == 'A' || categoria == 'C' || categoria == 'F' || categoria == 'H') {
        salario += salario * 0.1;
    } else {
        if(categoria == 'B' || categoria == 'D' || categoria == 'E' || categoria == 'I' || categoria == 'J' || categoria == 'T'){
            salario += salario * 0.15;
        } else {
            if(categoria == 'B' || categoria == 'D' || categoria == 'E' || categoria == 'I' || categoria == 'J' || categoria == 'T'){
                salario += salario * 0.15;
            } else {
                if(categoria == 'K' || categoria == 'R'){
                    salario += salario * 0.25;
                } else {
                    if(categoria == 'L' || categoria == 'M' || categoria == 'N' || categoria == 'O' || categoria == 'P' || categoria == 'Q' || categoria == 'S'){
                        salario += salario * 0.35;
                    } else {
                        if(categoria == 'U' || categoria == 'V' || categoria == 'X' || categoria == 'Y' || categoria == 'W' || categoria == 'Z'){
                            salario += salario * 0.5;
                        } else {
                            printf("Categoria inválida. \n");
                        }                
                    }
                }
            }
        }
    }
    
    
    printf("Você é um colaborador da categoria %c e seu novo salário é de: R$%.2f\n", categoria, salario);

}