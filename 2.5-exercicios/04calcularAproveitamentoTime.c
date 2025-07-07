#include <stdio.h>

int main() {

    int qtVitorias, qtEmpates, qtDerrotas, qtPontos;
    printf("------------ Bem vindo ao Programa de Aproveitamento do Time -------------- \n");
    printf("Informe a quantidade de vitórias: \n");
    do {
        scanf("%d", &qtVitorias);
        if (qtVitorias < 0) {
            printf("Quantidade de vitórias não pode ser negativa. Tente novamente.\n");
        }
    } while (qtVitorias < 0);
    printf("Informe a quantidade de empates: \n");
    do {
        scanf("%d", &qtEmpates);
        if (qtEmpates < 0) {
            printf("Quantidade de empates não pode ser negativa. Tente novamente.\n");
        }
    } while (qtEmpates < 0);
    printf("Informe a quantidade de derrotas: \n");
    do {
        scanf("%d", &qtDerrotas);
        if (qtDerrotas < 0) {
            printf("Quantidade de derrotas não pode ser negativa. Tente novamente.\n");
        }
    } while (qtDerrotas < 0);
    qtPontos = (qtVitorias * 3) + (qtEmpates * 1);
    printf("O time fez %d pontos.\n", qtPontos);
    printf("------------ Fim do Programa -------------- \n");
    return 0;
}