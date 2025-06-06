#include <stdio.h>

int main() {
    int tempoJogadoEmMinutos;
    int horas;
    int minutos;
    printf("------------ Bem vindo Jogador -------------- \n");
    printf("Informe o tempo jogado em minutos: \n");
    do {
        scanf("%d", &tempoJogadoEmMinutos);
        if (tempoJogadoEmMinutos <= 0) {
            printf("Quantidade de gols não pode ser zero ou negativo. Tente novamente.\n");
        }
    } while (tempoJogadoEmMinutos <= 0);
    
    horas = tempoJogadoEmMinutos / 60;
    minutos = tempoJogadoEmMinutos % 60;
    printf("O jogador jogou %d horas e %d minutos.\n", horas, minutos);

    printf("------------ Fim do Programa -------------- \n");
    return 0;
    return 0;
}