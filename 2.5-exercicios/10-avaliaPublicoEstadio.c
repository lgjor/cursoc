#include <stdio.h>

int main() {
    printf("---------- Programa de avaliação do nível da partida pela quantida de público ----------\n");
    int qtPublico;
    int capacidadeEstadio;
    float percentualPublico;
    do {
        printf("Informe a capacidade total do estádio: ");
        scanf("%d", &capacidadeEstadio);
        if (capacidadeEstadio <= 0) {
            printf("Capacidade inválida. Informe novamente.\n");
        }
    } while (capacidadeEstadio <= 0);
    do {
        printf("Informe a quantidade de público presente no estádio: ");
        scanf("%d", &qtPublico);
        if (qtPublico < 0) {
            printf("Quantidade inválida. Informe novamente.\n");
        }
    } while (qtPublico < 0);
    percentualPublico = (float)qtPublico / capacidadeEstadio * 100;
    printf("-----------------------------Resultados-----------------------------\n");
    if (percentualPublico > 90) {
        printf("O público está excelente.\n");
    } else if (percentualPublico >= 80 && percentualPublico <= 90) {
        printf("Lotado!\n");

    } else if (percentualPublico > 70 && percentualPublico < 90) {
        printf("Ótima presença de público!\n");
    } else if (percentualPublico > 50 && percentualPublico < 70) {
        printf("Público razoável.\n");
    } else {
        printf("O público está muito baixo.\n");
    }    
    return 0;
}