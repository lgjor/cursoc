#include <stdio.h>

int main() {
    char primeiroNome[20];
    int idade;
    int qtGols;
    printf("------------ Bem vindo Jogador -------------- \n");
    printf("Informe o primeiro nome: \n");
    scanf("%s",&primeiroNome);
    printf("Informe a idade: %d\n");
    scanf("%d",&idade);
    printf("Informe a quantidade de gols: \n");
    scanf("%d",&qtGols);
    printf("O jogador %s tem %d anos e fez %d gols.\n", primeiroNome, idade, qtGols);
    printf("------------ Fim do Programa -------------- \n");
    return 0;
    return 0;
}