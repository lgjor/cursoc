/*
Você tem 5 jogadores. Para cada jogador, leia 3 notas de avaliação (float). Calcule a média de cada jogador. Use if/else para classificar:

Excelente: média >= 9
Bom: entre 7 e 9
Regular: entre 5 e 7
Ruim: abaixo de 5
*/
#include <stdio.h>

float calcularMedia(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3.0f;
}

int main(int argc, char const *argv[])
{
    float notas[5][3]; // 5 jogadores, 3 notas cada
    float medias[5];
    /* code */
    printf("Digite as notas do jogador 1: \n");
    scanf("%f %f %f", &notas[0][0], &notas[0][1], &notas[0][2]);
    printf("Digite as notas do jogador 2: \n");
    scanf("%f %f %f", &notas[1][0], &notas[1][1], &notas[1][2]);
    printf("Digite as notas do jogador 3: \n");
    scanf("%f %f %f", &notas[2][0], &notas[2][1], &notas[2][2]);
    printf("Digite as notas do jogador 4: \n");
    scanf("%f %f %f", &notas[3][0], &notas[3][1], &notas[3][2]);
    printf("Digite as notas do jogador 5: \n");
    scanf("%f %f %f", &notas[4][0], &notas[4][1], &notas[4][2]);
    for (int i = 0; i < 5; i++) {
        medias[i] = calcularMedia(notas[i][0], notas[i][1], notas[i][2]);
        if (medias[i] >= 9.0f) {
            printf("Jogador %d: Excelente (Média: %.2f)\n", i + 1, medias[i]);
        } else if (medias[i] >= 7.0f) {
            printf("Jogador %d: Bom (Média: %.2f)\n", i + 1, medias[i]);
        } else if (medias[i] >= 5.0f) {
            printf("Jogador %d: Regular (Média: %.2f)\n", i + 1, medias[i]);
        } else {
            printf("Jogador %d: Ruim (Média: %.2f)\n", i + 1, medias[i]);
        }
    }

    return 0;
}