// SÍNTESE
//     ENTRADA: artigo_um_preco, artigo_um_desc, artigo_dois_preco, artigo_dois_desc, artigo_tres_preco, artigo_tres_desc (float)
//     PROCESSAMENTO: calcula o preço dos artigos com desconto e o total a pagar
//     SAÍDA: artigo_um_preco, artigo_dois_preco, artigo_tres_preco, total_a_pagar (float)

#include <stdio.h>

int main() {

    float artigo_um_preco;
    float artigo_dois_preco;
    float artigo_tres_preco;
    float artigo_um_desc;
    float artigo_dois_desc;
    float artigo_tres_desc;
    float total_a_pagar;
    
    

    printf("Insira o preço do artigo 1: \n");
    scanf("%f", &artigo_um_preco);

    printf("Insira o percentual de desconto do artigo 1, em números decimais: \n");
    scanf("%f", &artigo_um_desc);

    printf("Insira o preço do artigo 2: \n");
    scanf("%f", &artigo_dois_preco);

    printf("Insira o percentual de desconto do artigo 2, em números decimais: \n");
    scanf("%f", &artigo_dois_desc);

    printf("Insira o preço do artigo 3: \n");
    scanf("%f", &artigo_tres_preco);

    printf("Insira o percentual de desconto do artigo 3, em números decimais: \n");
    scanf("%f", &artigo_tres_desc);

    printf("Preço do artigo 1: R$%.2f\n", artigo_um_preco);
    printf("Preço do artigo 1 com desconto: R$%.2f\n", artigo_um_preco * (1 - artigo_um_desc));

    printf("Preço do artigo 2: R$%.2f\n", artigo_dois_preco);
    printf("Preço do artigo 2 com desconto: R$%.2f\n", artigo_dois_preco * (1 - artigo_dois_desc));

    printf("Preço do artigo 3: R$%.2f\n", artigo_tres_preco);
    printf("Preço do artigo 3 com desconto: R$%.2f\n", artigo_tres_preco * (1 - artigo_tres_desc));

    total_a_pagar = (artigo_um_preco * (1 - artigo_um_desc)) + (artigo_dois_preco * (1 - artigo_dois_desc)) + (artigo_tres_preco * (1 - artigo_tres_desc));

    printf("Total a pagar: R$%.2f\n", total_a_pagar);
    

}