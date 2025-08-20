/*
Crie uma função que imprime um quadrado de asteriscos com lado n. O usuário dirá qual o valor de n e qual caracter será usado (*, #, $ ...).
*/

#include <stdio.h>

void imprimeQuadrado(int n, char c) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", c);
        }
        printf("\n");
    }
}

int main() {
    int n;
    char c;

    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%d", &n);
    printf("Digite o caracter a ser usado: ");
    scanf(" %c", &c);

    imprimeQuadrado(n, c);

    return 0;
}