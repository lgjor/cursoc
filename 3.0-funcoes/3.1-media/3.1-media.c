/*
Crie uma função que recebe duas notas (float) e retorna a média, imprima com 2 casas decimais.
*/

#include <stdio.h>

float media(float numero1, float numero2){
    float resultado = (numero1 + numero2) / 2.0;
    return resultado; // Retorna a média
}

int main() {
    float numero1, numero2, resultado;;
    
    printf("Digite dois números: \n");
    scanf("%f %f" , &numero1, &numero2);
    
    
    resultado = media(numero1, numero2);
    printf("A média é: %.2f\n", resultado);  // Imprime a média com 2 casas decimais
    return 0;
}