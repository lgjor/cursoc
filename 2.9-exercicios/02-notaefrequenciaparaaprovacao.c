#include <stdio.h>
#include <stdbool.h>


int lerNumeroValido(int min, int max) {
    int numero;
    int resultado_scanf;
    bool entrada_valida = false; // Flag para controlar o loop de validação

    do {
        printf("Digite a opção desejada: ");
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

const char* verificaAlunoAprovado(int notaFinal, int percentualFrequencia){
    if (notaFinal >= 7 && percentualFrequencia >= 75 ){
        return "Aluno aprovado!\n";
    }
    else return "Aluno reprovado!\n";
}

int main() {
    int opcaoEscolhida = 0;
    int notaFinal;
    int percentualFrequencia;
    while ( opcaoEscolhida != 2){
        printf("------------ Sistema de avaliação escolar -------------- \n");
        printf("-- Opção 1: Avaliar aluno\n");
        printf("-- Opção 2: Sair\n");
        opcaoEscolhida = lerNumeroValido(1, 2);
        switch (opcaoEscolhida){
            case 1:
                    printf("Informe a nota final (de 0 a 10): \n");
                    notaFinal = lerNumeroValido(1, 10);
                    printf("Informe a frequência (porcentagem de presença, de 0 a 100): \n");
                    percentualFrequencia = lerNumeroValido(1,100);
                    printf("\n");
                    printf(verificaAlunoAprovado(notaFinal,percentualFrequencia));
                    printf("\n");
                    break;
            case 2:
                printf("Saindo do programa...\n");
                break;
        }
    }
}