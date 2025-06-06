#include <stdio.h>

int main() {
    int idade;
    int qtGols;
    printf("----------Bem-vindo ao programa de verificação de desempenho por idade----------\n");
    do {
        printf("Informe a idade do jogador: ");
        scanf("%d", &idade);
        if (idade <= 0) {
            printf("Idade inválida. Informe novamente.\n");
        }
    } while (idade <= 0);
    do {
        printf("Informe o número de gols marcados pelo jogador: ");
        scanf("%d", &qtGols);
        if (qtGols < 0) {
            printf("Número inválido. Informe novamente.\n");
        }
    } while (qtGols < 0);
    printf("-----------------------------Resultados-----------------------------\n");
    if (idade <= 20) {
        printf("Categoria: Sub-20\n");
        if (qtGols > 10) {
            printf("Jovem talento promissor!\n");
        } else {
            printf("Jovem em desenvolvimento.\n");
        } 
    }
    else if (idade > 20) {
        printf("Categoria: Profissional\n");
        if (qtGols > 15) {
            printf("Jogador experiente em grande fase!\n");
        } else {
            printf("Estevão\n");
        }
    }
    printf("----------------------------Fim do programa-------------------------\n");
    return 0;
}