/*
Um jogador precisa coletar moedas em um jogo. A cada rodada, ele coleta uma quantidade entre 1 e 10 moedas. O jogo só termina quando o jogador acumula pelo menos 100 moedas. Escreva um programa em C que solicite ao usuário, repetidamente, a quantidade de moedas coletadas por rodada, até que o total acumulado atinja ou ultrapasse 100 moedas. Ao final, exiba quantas rodadas foram necessárias para atingir a meta.
*/

#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int lerNumeroValido(int min, int max) {
    int numero;
    int resultado_scanf;
    bool entrada_valida = false; // Flag para controlar o loop de validação

    do {
        resultado_scanf = scanf("%d", &numero); // Tenta ler o número inteiro

        // Verifica se a leitura falhou (não foi um número) ou se o número está fora do intervalo
        if (resultado_scanf != 1 || numero < min || numero > max) {
            printf("Entrada invalida! Por favor, digite um numero inteiro entre %d e %d.\n", min, max);
            // Limpa o buffer de entrada: descarta todos os caracteres até encontrar uma quebra de linha ('\n')
            while (getchar() != '\n' && !feof(stdin));
            entrada_valida = false; // A entrada ainda é inválida
        } else {
            entrada_valida = true; // A entrada é válida, pode sair do loop
        }
    } while (!entrada_valida); // Continua o loop enquanto a entrada não for válida

    return numero; // Retorna o número válido
}

int main() {
    int qtMoeadas = 0;
    int rodadas = 0;

    do{
        printf("Informe a quantidade de moedas coletadas: ");
        qtMoeadas += lerNumeroValido(1, INT_MAX);
        rodadas++;
    }
    while (qtMoeadas < 100);
    printf("Você venceu após %d rodadas\n", rodadas);
}