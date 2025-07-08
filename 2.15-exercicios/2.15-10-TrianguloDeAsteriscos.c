#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <string.h>

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

// Piramide de asteriscos centralizada como uma árvore de natal
int main() {
    printf("Informe a altura do triangulo: ");
    int altura = lerNumeroValido(1, INT_MAX);
    int largura = ( altura * 2 ) - 1;

    for (int linhaAtual = 1; linhaAtual <= altura; linhaAtual++){    
        int asteriscos = linhaAtual * 2 - 1;
        int espacos = (largura - asteriscos)/2;
        for (int i = 0; i < espacos; i++) {
            printf(" ");
        }   
        for (int i = 0; i < asteriscos; i++) {
            printf("*");
        }
        printf("\n");
   }
} 