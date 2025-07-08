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
    int quantidadeARegistrar;
    int resultado_scanf;
    int min = 1;
    int max = INT_MAX;
    bool entrada_valida = false; // Flag para controlar o loop de validação
    
    printf("---------- Controle de Revisão de Carros ----------\n");
    printf("Quantos carros serão registrados? ");
    quantidadeARegistrar = lerNumeroValido(min, max);

    for(int carro = 1; carro <= quantidadeARegistrar; carro++){
        printf("---------- Registro do Carro %d ----------\n", carro);
        printf("Informe o modelo do carro: %d ", carro);
        char modelo[100];
        scanf("%s", modelo);
        printf("Informe o ano de fabricação do carro %d: ", carro);
        int anoFabricacao = lerNumeroValido(min, max);
        printf("O carro está funcionando normalmente? (1 - Sim, 0 - Não): ");
        int isFunctioning = lerNumeroValido(0, 1);
        if (isFunctioning == 0){
            if (anoFabricacao < 2005){
                printf("O carro %s precisa de REPAROS URGENTES!\n", modelo);
            }
            else {
                printf("O carro %s precisa de manutenção!\n", modelo);
            }
        }
        else {
            if (anoFabricacao < 2005){
                printf("O carro %s é antigo, recomenda-se uma revisão!\n", modelo);
            }
            else {
                printf("O carro %s está em boas condições!\n", modelo);
            }            
        }
        printf("---------- Fim do registro do Carro %d ----------\n", carro);
    }
}