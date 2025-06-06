#include <stdio.h>

int main() {
    printf("----------Bem-vindo ao programa de verificação de categoria----------\n");
    int idade;
    do {
        printf("Informe a idade do jogador: ");
        scanf("%d", &idade);
        if (idade < 0) {
            printf("Idade inválida. Informe novamente.\n");
        }
    } while (idade < 0);
    printf("-----------------------------Resultados-----------------------------\n");
    if (idade <= 20) {
        printf("Categoria: Sub-20\n");
    } else {
        printf("Categoria: Profissional\n");
    }
    printf("----------------------------Fim do programa-------------------------\n");
    return 0;
}