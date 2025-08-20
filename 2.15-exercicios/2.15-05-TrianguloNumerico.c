#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int lerNumeroValido(int min, int max) {
    int numero;
    int resultado_scanf;
    bool entrada_valida = false; // Flag para controlar o loop de validação

    do {
        printf("Digite o número de linhas do triângulo: ");
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
    int min = 1;
    int max = INT_MAX;
    int n = lerNumeroValido(min, max);
    for (int line = 1; line <= n; line++) {
        for (int col = 1; col <= line; col++) {
            printf("%d ", col);
        }
        printf("\n");
    }
}