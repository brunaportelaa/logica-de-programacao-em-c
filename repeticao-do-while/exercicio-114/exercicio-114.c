// SÍNTESE
//     ENTRADA: 
//     PROCESSAMENTO: 
//     SAÍDA: 

#include <stdio.h>

int main() {

    int i;
    int numHoteis;
    int distancia;
    int numVisitantes = 0;
    int tipoAcesso;
    int mais15Km = 0;
    float qtdNaoAsfaltados = 0;
    float somaVisitantesNaoAsfaltados = 0;
    float mediaVisitantesNaoAsfaltados = 0.0;

    printf("Informe quantos hoteis serão cadastrados (máximo 9): \n");
    scanf("%d", &numHoteis);

    for ( i = 0; i < numHoteis; i++)
    {
        printf("Informe a distância do hotel %d do centro da cidade: \n", i+1);
        scanf("%d", &distancia);

        if (distancia > 15)
        {
            mais15Km++;
        }

        printf("Informe o número de visitantes no último feriado: \n");
        scanf("%d", &numVisitantes);

        printf("Informe o tipo de acesso (0 - não asfaltado, 1 - asfaltado): \n");
        scanf("%d", &tipoAcesso);

        if (tipoAcesso == 1 && numVisitantes < 1000)
        {
            printf("O hotel %d teve menos que 1000 visitantes e fica a %dkm do centro \n", i+1, distancia);
            
        } else {
            if (tipoAcesso == 0) {
                somaVisitantesNaoAsfaltados += numVisitantes;
                qtdNaoAsfaltados++;
            }
        }
        
        
        
    }
    
    if (qtdNaoAsfaltados > 0)
    {
        mediaVisitantesNaoAsfaltados = somaVisitantesNaoAsfaltados / qtdNaoAsfaltados;
    } else {
        mediaVisitantesNaoAsfaltados = 0.0;
    }

    printf("Número de visitantes a +15km do centro: %d\n", mais15Km);
    printf("Média de visitantes no último feriado: %.2f\n", mediaVisitantesNaoAsfaltados);
    

}