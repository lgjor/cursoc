#include <stdio.h>

int main() {
    int qtGols;
    int qtPartidas;
    float mediaGols;
    printf("------------ Bem vindo Jogador -------------- \n");
    printf("Informe a quantidade de gols: \n");
    do {
        scanf("%d", &qtGols);
        if (qtGols <= 0) {
            printf("Quantidade de gols não pode ser zero ou negativo. Tente novamente.\n");
        }
    } while (qtGols <= 0);
    
    
     
    printf("Informe a quantidade de partidas: \n");
    do {
        scanf("%d", &qtPartidas);
        if (qtPartidas <= 0) {
            printf("Quantidade de partidas não pode ser zero ou negativo. Tente novamente.\n");
        }
    } while (qtPartidas <= 0);
    
    mediaGols = (float)qtGols / qtPartidas;

    printf("O jogador fez %.2f gols por partida.\n", mediaGols);
    printf("------------ Fim do Programa -------------- \n");
    return 0;
    return 0;
}