// SÍNTESE
//     ENTRADA: dtNasc (int)
//     PROCESSAMENTO: verifica o signo de acordo com a data de nascimento
//     SAÍDA: printf com o signo

#include <stdio.h>

int main() {

    int dtNasc;
    int dia;
    int mes;
    
    printf("Informe sua data de nascimento no modelo DDMMAAAA: \n");
    scanf("%d", &dtNasc);

    dia = dtNasc / 1000000;
    mes = (dtNasc / 10000) % 100;

    if( (dia >= 21 && mes == 1) || ( dia <= 19 && mes == 2) ) {
        printf("Aquariano nato! Irreverente e original, recuse imitações.\n");    
    } else {
        if ( (dia >= 20 && mes == 2) || ( dia <= 20 && mes == 3) ) {
            printf("Olá pisciano! Viajado e criativo, mas é por que seus divertidamentes são grandes workaholics.\n");
        } else {
                if ( (dia >= 21 && mes == 3) || ( dia <= 20 && mes == 4) ) {
                    printf("Arianjos! Dizem por aí que são impulsivos, mas é por que a eles falta coragem.\n");
                } else {
                    if ( (dia >= 21 && mes == 4) || ( dia <= 20 && mes == 5) ) {
                        printf("Olá, taurino! O signo que mais tem fome de conforto e bem-estar.\n");
                    } else {
                        if ( (dia >= 21 && mes == 5) || ( dia <= 20 && mes == 6) ) {
                            printf("Fala, galerinha de Gêmeos! Fofoqueira nada, apenas propagadora dos fatos sociais.");
                        } else {
                            if ( (dia >= 21 && mes == 6) || ( dia <= 22 && mes == 7) ) {
                                printf("Cancerianos! O signo mais sensível e protetor do zodíaco.\n");
                            } else {
                                if ( (dia >= 23 && mes == 7) || ( dia <= 22 && mes == 8) ) {
                                    printf("Abram alas para a estrelinha do zodíaco: LEÃO!!!");
                                } else {
                                    if ( (dia >= 23 && mes == 8) || ( dia <= 22 && mes == 9) ) {
                                        printf("Não reclames dos virginianos, pois nunca saberás quando precisarás de ajuda para criar uma planilha no Excel.");
                                    } else {
                                        if ( (dia >= 23 && mes == 9) || ( dia <= 22 && mes == 10) ) {
                                            printf("Librianos: o signo mais indeciso do zodíaco, mas é por que eles têm muitas opções ;)");
                                        } else {
                                            if ( (dia >= 23 && mes == 10) || ( dia <= 21 && mes == 11) ) {
                                                printf("Bem-vindos, escorpianos! O signo mais intenso e misterioso do zodíaco.");
                                            } else {
                                                if ( (dia >= 22 && mes == 11) || ( dia <= 21 && mes == 12) ) {
                                                    printf("Se você não ama os sagitarianos, você não os conhece direito.");
                                                } else {
                                                    if ( (dia >= 22 && mes == 12) || ( dia <= 19 && mes == 1) ) {
                                                        printf("Capricornianos: os faria-limers do zodíaco.");
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }