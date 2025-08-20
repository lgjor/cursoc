#include <stdio.h>

int parOuImpar(int numero){
    if (numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    if (parOuImpar(numero)) {
        printf("O numero %d eh par.\n", numero);
    } else {
        printf("O numero %d eh impar.\n", numero);
    }
    return 0;
}