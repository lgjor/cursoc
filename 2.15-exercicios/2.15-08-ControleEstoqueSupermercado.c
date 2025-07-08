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

int main() {
    int quantidadeACadastrar;
    int resultado_scanf;
    int min = 1;
    int max = INT_MAX;
    bool entrada_valida = false; // Flag para controlar o loop de validação
    
    printf("---------- Édicasa Controle de estoque ----------\n");
    printf("Quantos produtos deseja cadastrar?");
    quantidadeACadastrar = lerNumeroValido(min, max);

    for(int produto = 0; produto < quantidadeACadastrar; produto++){
        printf("Digite o nome do produto: ");
        char nome[100];
        scanf("%s", nome);
        printf("Digite a quantidade em estoque: ");
        int quantidadeEstoque = lerNumeroValido(min, max);
        printf("Digite a quantidade minima: ");
        int quantidadeMinima = lerNumeroValido(min, max);
        if (quantidadeEstoque < quantidadeMinima){
            printf("O produto %s precisa ser reposto! (Estoque: %d, Mínimo: %d\n)", nome, quantidadeEstoque, quantidadeMinima);
        }
    }

}