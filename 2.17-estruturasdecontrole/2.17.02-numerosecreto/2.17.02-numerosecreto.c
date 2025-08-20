/*
Imagine que você está construindo um jogo em que o jogador deve adivinhar um número secreto entre 1 e 10. O programa deve continuar pedindo palpites até que o número correto seja adivinhado. Use DO WHILE para garantir que o jogador tenha ao menos uma tentativa. O número secreto deve ser 7. Ao acertar, exiba "Você acertou!"
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
    const int numero_secreto = 7;
    int palpite, rodadas = 0;
    do{
        printf("Qual o número secreto? ");
        palpite = lerNumeroValido(1, INT_MAX);
        rodadas++;
    } while (palpite != numero_secreto);
        printf("Você acertou em %d rodadas!\n", rodadas);
}