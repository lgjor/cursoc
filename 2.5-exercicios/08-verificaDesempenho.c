#include <stdio.h>

int main() {
    printf("----------Bem-vindo ao programa de verificação de desempenho----------\n");
    int numeroGols;
    do {
        printf("Informe o número de gols marcados pelo jogador: ");
        scanf("%d", &numeroGols);
        if (numeroGols < 0) {
            printf("Número inválido. Informe novamente.\n");
        }
    } while (numeroGols < 0);
    printf("-----------------------------Resultados-----------------------------\n");
    if (numeroGols >= 10) {
        printf("Excelente temporada!\n");
        printf("O jogador é considerado um craque!\n");
    } else if ((numeroGols > 5) && (numeroGols < 10)) {
        printf("Boa temporada!\n");
        printf("O jogador é considerado bom.\n");
    } else if (numeroGols < 5) {
        printf("Temporada abaixo do esperado.\n");
        printf("O jogador é considerado regular.\n");
    } else {
        printf("Número de gols inválido\n");
    }
    printf("----------------------------Fim do programa-------------------------\n");
    return 0;
}