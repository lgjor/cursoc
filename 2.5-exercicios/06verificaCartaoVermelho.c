#include <stdio.h>

int main() {
    printf("Bem-vindo ao programa de verificação de cartão vermelho\n");
    int numeroCartoesAmarelos;
    do {
        printf("Informe o número de cartões amarelos recebidos pelo jogador: ");
        scanf("%d", &numeroCartoesAmarelos);
        if (numeroCartoesAmarelos < 0) {
            printf("Número inválido. Informe novamente.\n");
        }
    } while (numeroCartoesAmarelos < 0);
    printf("----------Resultados----------\n");
    if (numeroCartoesAmarelos == 2) {
        printf("Cartão Vermelho!\n");
        printf("O jogador está expulso.\n");
    } else if (numeroCartoesAmarelos > 2) {
        printf("Número de cartões amarelos inválido. O jogador não pode receber mais de 2 cartões amarelos.\n");
    } else {
        printf("Segue o jogo.\n");
        printf("O jogador não recebeu cartão vermelho.\n");
    }
    
    return 0;
}