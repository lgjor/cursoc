/*
Crie uma função que receba três inteiros e retorne o maior deles.
*/

#include <stdio.h>

int maiorDeTres(int a, int b, int c){
    int maior = a; // Assume a é o maior inicialmente

    if (b > maior) {
        maior = b; // Atualiza se b for maior
    }
    if (c > maior) {
        maior = c; // Atualiza se c for maior
    }

    return maior; // Retorna o maior valor encontrado
}

int main() {
    int num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    int maior = maiorDeTres(num1, num2, num3);
    printf("O maior numero entre %d, %d e %d é: %d\n", num1, num2, num3, maior);

    return 0;
}