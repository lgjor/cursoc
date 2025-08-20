/*
Crie uma função que recebe uma string (char[ ]) e retorna a quantidade de vogais.
Dica: Toda string termina com '\0'.
*/

#include <stdio.h>

int contarVogais(const char palavra[]) {
    int numeroVogais = 0;
    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' ||
            palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U') {
            numeroVogais++;
        }
    }

    return numeroVogais; // Retorna o número de vogais
}

int main() {
    char texto[50];
    int resultado;
    
    printf("Digite uma palavra: \n");
    scanf("%s", texto);

    resultado = contarVogais(texto);
    printf("O número de vogais é: %d\n", resultado);  // Imprime o número de vogais
    return 0;
}